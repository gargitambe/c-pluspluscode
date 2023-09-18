#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

   cout << "----------------------------------------------------------------------------------" << endl;
   cout << "  |      *****|||********Welcome To guess number game********|||*****         |   " << endl;
   cout << "  |                    ####### INSTRUCTIONS ########                          |   " << endl;
   cout << "  |        @@@@@@@@You have to guess a number between 1 and 10.@@@@@@@        |   " << endl;
   cout << "  |   !!You'll get limited chances based on the difficulty level you choose!! |   " << endl;
   cout << "----------------------------------------------------------------------------------" << endl;

   while (true)
   {
      cout << "\nDifficulty levels\n";
      cout << "\n1 for easy level!\t";
      cout << "\n2 for medium-level!\t";
      cout << "\n3 for difficult medium!\t";
      cout << "\n0 for ending the game!\n"
           << endl;

      int level;
      cout << "Enter the difficulty level number:";
      cin >> level;
      srand(time(0));
      int randomNumber = (rand() % (100 - 1)) + 1;
      int guess;

      if (level == 1)
      {
         cout << "\nYou will get 7 choices for finding the random number between 1 and 100";
         int leftChance = 7;
         for (int i = 1; i <= 7; i++)
         {
            cout << "\n\nEnter the number: ";
            cin >> guess;
            if (guess == randomNumber)
            {
               cout << "Voila! You have guess correct number";
               break;
            }
            else if (guess > randomNumber)
            {
               cout << guess << " is greater then the random number ";
            }
            else
            {
               cout << guess << " is less then the the random number ";
            }
            leftChance--;
            if (leftChance == 0)
            {
               cout << "\nBetter luck next time" << endl;
               cout << randomNumber << " is the number";
            }
         }
      }

      else if (level == 2)
      {
         cout << "\nYou will get 5 choices for finding the random number between 1 and 100";
         int leftChance = 5;
         for (int i = 1; i <= 5; i++)
         {
            cout << "\n\nEnter the number: ";
            cin >> guess;
            if (guess == randomNumber)
            {
               cout << "Voila! You have guess correct number";
               break;
            }
            else if (guess > randomNumber)
            {
               cout << guess << " is greater then the random number ";
            }
            else
            {
               cout << guess << " is less then the the random number ";
            }
            leftChance--;
            if (leftChance == 0)
            {
               cout << "\nBetter luck next time" << endl;
               cout << randomNumber << " is the number";
            }
         }
      }

      else if (level == 3)
      {
         cout << "\nYou will get 3 choices for finding the random number between 1 and 100";
         int leftChance = 3;
         for (int i = 1; i <= 3; i++)
         {
            cout << "\n\nEnter the number: ";
            cin >> guess;
            if (guess == randomNumber)
            {
               cout << "Voila! You have guess correct number";
               break;
            }
            else if (guess > randomNumber)
            {
               cout << guess << " is greater then the random number ";
            }
            else
            {
               cout << guess << " is less then the the random number ";
            }
            leftChance--;
            if (leftChance == 0)
            {
               cout << "\nBetter luck next time!!" << endl;
               cout << randomNumber << " is the number";
            }
         }
      }

      else if (level == 0)
      {
         exit(0);
      }
      else
      {
         cout << "Kindly select between (0,1,2,3)" << endl;
      }
   }

   return 0;
}
