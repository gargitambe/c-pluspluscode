#include <iostream>
using namespace std;

int main()
{

    try
    {
        int age = 16;
        if (age >= 18)
        {
            cout << "Acess granted-you are old enough.";
        }
        else
        {
            throw 505;
        }
    }
    catch (int myNum)
    {
        cout << "Access denied-You must be at least 18 years old" << endl;
        cout << "Error number: " << myNum;
    }
    return 0;
}