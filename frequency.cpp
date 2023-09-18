#include <iostream>
using namespace std;

int main(){
    int i,count = 0;
    char str[100],ch;
    cout << "Enter the string: ";
    gets(str);
    cout << "Enter any character(present in string) to find its frequency: ";
    cin >> ch;
    for(i =0;str[i]!='\0';i++){
        if(ch == str[i]){
        count++;
        }
    }
    cout << "\nFrequency of ch" <<ch << "= "<< count;
    cout << "\n\n" << ch << " occurs " << count << " times in " << str ; 
    return 0;
}