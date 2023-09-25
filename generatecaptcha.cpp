// 2.write a program to create a captcha of 9 length 

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


string generatecaptcha(int n){

    time_t t;
    srand((unsigned)time(&t));

    char *chrs="abcdefghijklmnopqrstuvwxyxzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string captcha= "";
    while(n--)
    captcha.push_back(chrs[rand()%62]);
    
      return captcha;
    }

    int main(){
       string captcha2= generatecaptcha(9);
        cout << captcha2;

        return 0;
    }
    

    

    





   

