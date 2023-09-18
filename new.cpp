#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str1[20],str2[20];
    cout << "Enter 1st string:";
    cin >> str1;
    cout << "Enter 2st string:";
    cin >> str2;
    if(strcmp(str1,str2)==0){
    cout << "Strings are equal";
    }else {
        cout << "Strings are not equal";
    }
  return 0;
}
