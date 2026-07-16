#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    string command = "";
    int comlength = 0;

    char c;

    while(true){
        c = _getch();
        comlength++;
        if(c == 127 || c == 8){
            if(comlength > 1){
                system("cls");
                command[comlength - 2] = '\0';

                if(comlength -2 < 0){
                    cout << command;
                }else{
                    comlength = comlength - 2;
                }
                cout << command;
            }else{
                command = "";
            }
            continue;
        }
        if(c == '\r'){ // \n for linux
            break;
        }
        command += c;
        cout << c;
    }

    cout << "final command: " << command << endl;
}