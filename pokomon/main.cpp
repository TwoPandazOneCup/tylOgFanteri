#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "pokemon.h"
using namespace std;
/*
class NyPokemon: public Pokemon
{

};
*/
int main(int argc, char** argv)
{
    srand (time(NULL));
    int nr = rand() % 16 + 1;
    Pokemon fiende(nr , 90);
    fiende.printPok();
    std::cout << "ein vill lvv "<<fiende.level<<" "<<fiende.namn<<" truffe" << std::endl;



    return 0;
}
