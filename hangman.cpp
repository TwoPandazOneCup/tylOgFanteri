#define MAXLINE 1000
#define EOF     -1
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ord = "laangstreng";
    string svar = ord;
    for (int i = 0; i <= ord.length() - 1; ++i)
        svar.at(i) = '_';
    string inndata;
    char input;
    bool hengt = false;
    int liv = 4;
    while (!hengt){
        cin >> inndata;
        input = inndata.at(0);
        if (svar.find(input) < svar.length()) {
            cout <<input << " er allereie gissa \n" <<endl;
            --liv;
        } else if (ord.find(input) < ord.length() ){
            for(int i = 0; i <= ord.length() - 1; ++i){
                if (ord.at(i) == input) 
                    svar.at(i) = input;
            }
            cout <<input<< " "<< svar <<endl;
        } else {
            cout << "feil \n";
            --liv;
            cout <<liv <<" liv igjen\n";
            

        }
         if (liv <= 0){
            hengt = true;
            cout << "for månge forsøk prøv igjen\n";
        }
        if ( ord == svar){
            cout << "du vant\n";
            break;
        }
    }
}
