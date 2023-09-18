#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));
    int random1 = rand() % 9 + 1;
    int random2 = rand() % 10 + 1;
    int random3 = rand() % 10 + 1;
    int random4 = rand() % 10 + 1;
    int random5 = rand() % 10 + 1;
    int random6 = rand() % 10 + 1;
    // cout << random1 << endl;
    // cout << random2 << endl;
    // cout << random3 << endl;
    // cout << random4 << endl;
    do
    {
        string respond;
        cout << "HOW MANY DIGIT PASSWORD U WANT TO GENERATE?" << endl
             << "4 OR 6 ?" << endl;
        cout << "PRESS CTRL + C FOR EXIT" << endl;

        cin >> respond;

        if (respond == "4")
        {
            int random = (random1 * 1000) + (random2 * 100) + (random3 * 10) + (random4 * 1);
            cout << endl
                 << "YOUR 4 DIGIT OTP IS:" << random << endl;
        }

        else if (respond == "6")
        {
            int random = (random1 * 100000) + (random2 * 10000) + (random3 * 1000) + (random4 * 100) + (random5 * 10) + (random6 * 1);
            cout << endl
                 << "YOUR 6 DIGIT OTP IS:" << random << endl;
        }

        else
        {
            cout << "PLEASE ENTER THE NUMBER(4 or 6)." << endl;
        }

    } while (true);

    return 0;
}