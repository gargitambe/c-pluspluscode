#include <iostream>
using namespace std;

int main(){
    int n,reverse=0,rem;
    cout << "Enter any integer:";
    cin >> n;

    while(n>0){
        rem = n%10;
        reverse = reverse*10 + rem;
        n=n/10;
    }
    cout << "Reverse of an integer is: "<< reverse;
    return 0;
}