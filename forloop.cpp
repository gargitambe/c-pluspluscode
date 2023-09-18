#include <iostream>
using namespace std;

int main(){
    // for(int i = 1; i <= 5;i=i+2){
    //     cout << "\n"<< i;
    //     for(int j = 1; j <= 3;j++){
    //         cout << "\n"<< "Inner "<<j;
    //     }
    // }

    // int mynumbers[5]={10,20,30,40,50};
    // for(int i: mynumbers){
    //     cout << "\n" << i;
    // }


    // for(int i = 0; i <= 10;i++){
    //     if(i == 4){
    //         break;
    //     }
    //     cout << "\n" << i;
    // }


    int i = 0;
    while(i < 10){
        cout << "\n" << i;
        i++;
        if(i == 4){
            break;
        }
    }


    return 0;
}