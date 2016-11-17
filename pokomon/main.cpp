#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "pokemon.h"
#include <ncurses.h>

#define ANGREPSSTYRKE 100
using namespace std;
/*
class NyPokemon: public Pokemon
{

};
*/
int main(int argc, char** argv)
{
  srand (time(NULL));
  int nr = rand() % 131 + 1;
  Pokemon fiende(nr , 80, 2000);
  fiende.printPok();
  fiende.art = GRASS;
  int angrepsStyrke = 100;
  cout <<"lvl "<<fiende.pokeDexNr<<" "<<fiende.namn<< " med " <<fiende.liv <<" liv truffe" << endl;
  char inputchar;



    /*while (fiende.liv > 0)
	{
        cin >> inputchar;
        if (fiende.liv == 0 || inputchar == 'q')
			break;

        if (inputchar == 'n'){
          cout <<fiende.angripOgPrint(NORMAL) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(NORMAL)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'f'){
          cout <<fiende.angripOgPrint(FIRE) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(FIRE)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'w'){
          cout <<fiende.angripOgPrint(WATER) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(WATER)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'e'){
          cout <<fiende.angripOgPrint(ELECTRIC)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(ELECTRIC)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'g'){
          cout <<fiende.angripOgPrint(GRASS)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(GRASS)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'i'){
          cout <<fiende.angripOgPrint(ICE)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(ICE)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'f'){
          cout <<fiende.angripOgPrint(FIGHTING)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(FIGHTING)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'p'){
          cout <<fiende.angripOgPrint(POISON)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(POISON)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'g'){
          cout <<fiende.angripOgPrint(GROUND)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(GROUND)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'l'){
          cout <<fiende.angripOgPrint(FLYING)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(FLYING)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'p'){
          cout <<fiende.angripOgPrint(PSYCHIC)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(PSYCHIC)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'b'){
          cout <<fiende.angripOgPrint(BUG) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(BUG)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'r'){
          cout <<fiende.angripOgPrint(ROCK) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(ROCK)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'g'){
          cout <<fiende.angripOgPrint(GHOST) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(GHOST)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'd'){
          cout <<fiende.angripOgPrint(DRAGON) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(DRAGON)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'k'){
          cout <<fiende.angripOgPrint(DARK) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(DARK)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 's'){
          cout <<fiende.angripOgPrint(STEEL) <<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(STEEL)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else if (inputchar == 'y'){
          cout <<fiende.angripOgPrint(FAIRY)<<endl;
          fiende.liv = fiende.liv - (angrepsStyrke * fiende.angrip(FAIRY)) / 100;
          cout <<fiende.namn <<" har "<< fiende.liv<< " liv igjen \n";
        }else{
    			cout << "Ugyldig input, prøv igjen. \n";
    	}


	}
	if (fiende.liv <= 0)
		cout << fiende.namn<<" er dau, gratulere \n";
*/




    return 0;
}
