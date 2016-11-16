#include<iostream>
#include<string>
using namespace std;
int main()
{
    string rekke = "199.3";

    int nRekke[255] = {0};
    char cRekke[255] = {'0'};
    string tal = ("");
    int b = 0;
    int c;
    bool funne = false;
    while(true)
    {
        int v = c;
        while(funne != true)
        {
            tal.reserve(255);
            if(rekke.at(v) == '.'){
                cRekke[b] = rekke.at(v);
                funne = true;
            } else {
                tal.at(v) = rekke.at(v);
                tal.at(v + 1) = '\0';
            }
            ++v;
            c = v;
        }funne = false;
        //cout <<tal.length();
        //nRekke[b] = stoi(tal,nullptr);
        tal = "";
        ++b;
        if (b == 4)
            break;

    }
     cout << rekke <<endl;
     for (int i = 0; i <= 10; ++i){
             cout << nRekke[i]<< '\t'<< cRekke[i]<<endl;
     }
}
