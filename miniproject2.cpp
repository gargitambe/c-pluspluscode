#include <iostream>
#include <cstdlib>
#include <ctime>

const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSOR = 's';

using namespace std;

char getComputerOption()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    if (num == 1)
        return 'r';
    if (num == 2)
        return 'p';
    if (num == 3)
        return 's';
}

char getUserOption()
{
    char c;
    cout << "------------------------------------------------------"<<endl;
    cout << "|        ###ROCK,PAPER AND SCISSOR GAME!###          |" << endl;
    cout << "|    ******Choose any one of the following*****      |" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "(r) for rock" << endl
         << "(p) for paper" << endl
         << "(s) for scissor" << endl;
         cin >> c;

    while (c != 'r' && c != 'p' && c != 's')
    {
        cout << "Please enter any one of the following."<< endl;
        cout << "(r) for rock" << endl
             << "(p) for paper" << endl
             << "(s) for scissor";
        cin >> c;
    }
    return c;
}

void showSelectedOption(char option)
{
    if (option == 'r')
        cout << "Rock" << endl;
    if (option == 'p')
        cout << "Paper" << endl;
    if (option == 's')
        cout << "Scissor" << endl;
}

void choiceWinner(char uChoice, char cChoice)
{
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "Computer Wins! Paper wraps Rock." << endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSOR)
    {
        cout << "Computer Wins! Scissors cut Paper." << endl;
    }
    else if (uChoice == SCISSOR && cChoice == ROCK)
    {
        cout << "Computer Wins! Rock smashes scissor." << endl;
    }
    else if (uChoice == ROCK && cChoice == SCISSOR)
    {
        cout << "You Wins! Rock smashes scissor." << endl;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You Wins! Paper wraps Rock." << endl;
    }
    else if (uChoice == SCISSOR && cChoice == PAPER)
    {
        cout << "You Wins! Scissor cuts paper." << endl;
    }
    else 
    {
        cout << "Tie.Play again win the game."<< endl;
    }
}

int main()
{
    char uChoice;
    char cChoice;

    uChoice = getUserOption();
    cout << "Your choice is: " << endl;
    showSelectedOption(uChoice);

    cout << "Computer's choice is: " << endl;
    cChoice = getComputerOption();
    showSelectedOption(cChoice);

    choiceWinner(uChoice, cChoice);
    return 0;
}