#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include "pokemon.h"
using namespace std;

class NyPokemon: public Pokemon
{

};

int main()
{
    NyPokemon charizard;
    charizard.pokeDexNr = 9;
    charizard.printPok(1);
    return 0;
}
