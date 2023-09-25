// 6.  write a program  to find compound interest

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double principal,rate,time;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter time: ";
    cin >> time;

    cout << "Enter rate: ";
    cin >> rate;

// A= P (1 + r / m)^mt



    double amount= principal*(pow((1+rate/100),time));
    double compoundinterest= amount-principal;

    cout << "Compound interest is: "<< compoundinterest;

    return 0;
}
