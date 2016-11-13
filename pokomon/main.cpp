#define MAXLINE 1000
#define EOF     -1
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iostream>
#include <string>
#include "pokemon.h"
using namespace std;

class NyPokemon: public Pokemon
{

};
istream& operator>>( istream& is, type& i)

{
    int tmp;
    if (is >> tmp)
        i = static_cast<type>(tmp);
    return is;

}
int main()
{
    int angrep;
    NyPokemon charizard;
    charizard.art = ROCK;
    cout<< charizard.angripOgPrint(ROCK)<<endl;
    cout<< charizard.angripOgPrint(STEEL)<<endl;

}
