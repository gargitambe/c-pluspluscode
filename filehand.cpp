#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream Myfile("filename.txt");
    Myfile << "Files can be tricky,but it is fun enough!";

    Myfile.close();
}
