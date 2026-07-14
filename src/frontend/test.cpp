#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    string command = "";


    char c;

    while(true){
        c = _getch();
        if(c == '\r'){ // \n for linux
            break;
        }
        command += c;
        cout << c;
    }
}