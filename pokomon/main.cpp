#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include "pokemon.h"
using namespace std;

std::string getFileContents (std::ifstream& File)
{
    std::string Lines = "";        //All lines

    if (File)                      //Check if everything is good
    {
	while (File.good ())
	{
	    std::string TempLine;                  //Temp line
	    std::getline (File , TempLine);        //Get temp line
	    TempLine += "\n";                      //Add newline character

	    Lines += TempLine;                     //Add newline
	}
	return Lines;
    }
    else                           //Return error
    {
	return "ERROR File does not exist.";
    }
}

void printPok(int x)
{

    char filnamn[3];
    for (int i = 0; i < 2; ++i){
        if (x <= 9 || x >= 1) filnamn[0] = x + 48;
    }
    cout << filnamn << endl;
    ifstream  ifs;
    ifs.open(filnamn);
    string out = getFileContents(ifs);
    cout << out;
}
class NyPokemon: public Pokemon
{

};

int main()
{
    printPok(3);
    return 0;
}
