#include <iostream>
using namespace std;

int main(){
    long f=1;
    int num,min,max;
    
    cout << "Enter the Minimum range:";
    cin >> min;

    cout << "Enter the Maximum range:";
    cin >> max;

    cout << "Factorial series in given range:";
    for(num=min;num<=max;num++)
    {
        f=1;
        for(int i=1;i<=num;i++)
        f=f*i;
        cout << f << "\t";
    }

    return 0;
}