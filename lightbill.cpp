#include<iostream>
using namespace std;
int main(){
    int lightunit=640;
    int first200unit=0;
    int next300unit=4;//201-500 //1200
    int after500unit=7;//>500
    int E500unit=first200unit+1200;

    if(lightunit < 200){
        cout << "Free";
    }
    else if(lightunit > 200 && lightunit < 500){
        cout << (lightunit-200)*next300unit;
    }
    else{
         cout<<(lightunit-500)*7+1200;
        // cout<<(lightunit-500)*7+E500unit;

    }

    return 0;
}

