#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char strs[100],countw = 0,strw[15],i;

    cout << "Write a sentence: ";
    gets(strs);
    int len = strlen(strs);
    for(i=0;i<len;i++){
        if(strs[i] == 'a')
        {
           countw++;
        }
    }
    cout << "Total number of 'a'  occur  in the sentence is: " << countw + 1 -1;
    return 0;
}