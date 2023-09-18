#include <iostream>
using namespace std;

int main(){
    float cm,meter,km;
    cout << "Enter length in centimeter: ";
    cin >> cm;
    meter=cm/100.0;
    km=cm/100000.0;

    cout << "Length in meter= "<<meter;
    cout << "Length in kilometer= "<< km;
    return 0;
}