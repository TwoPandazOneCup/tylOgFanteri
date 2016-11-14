#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include "pokemon.h"
using namespace std;

class NyPokemon: public Pokemon
{

};

int main(int argc, char** argv)
{
    NyPokemon charizard;
    charizard.pokeDexNr = 1;
    charizard.printPok();
    cout <<"Ein vill "<< charizard.namngje() <<" truffe "<<endl;
    return 0;
}
