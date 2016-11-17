using namespace std;
#include <fstream>
#include <string>
enum type
{

    NORMAL,
    FIRE,
    WATER,
    ELECTRIC,
    GRASS,
    ICE,
    FIGHTING,
    POISON,
    GROUND,
    FLYING,
    PSYCHIC,
    BUG,
    ROCK,
    GHOST,
    DRAGON,
    DARK,
    STEEL,
    FAIRY
};

class Pokemon
{
public:
    void printPok();

    Pokemon(int x, int y, int z);
    string pokString();

    type art;
    unsigned short int level;
    unsigned short int pokeDexNr;
    int liv;
    string namn;
    string namngje(int x);
    int angrip(type angrep);
    string bilete = pokString();

    string angripOgPrint(type angrep)
    {
        int verdi = angrip(angrep);
        switch (verdi){
            case 0:
                return "Not effective";
            case 50:
                return "It's not very effective";
            case 100:
                return "normal skade";
            case 200:
                return "It's super effective";
            default:
                return "normalskade";
        }
    }


    std::string getFileContents (std::ifstream& File)
    {
        std::string Lines = "";        //All lines

        if (File)                      //Check if everything is good
        {
    	while (File.good ())
    	{
    	    std::string TempLine;                  //Temp line
    	    std::getline (File , TempLine);        //Get temp line
    	    TempLine += '\n';                      //Add newline character

    	    Lines += TempLine;                     //Add newline
    	}
    	return Lines;
        }
        else                           //Return error
        {
    	return "ERROR File does not exist.";
        }
    }


};


Pokemon::Pokemon(int pokeNr, int nivaa, int piv)
{
    pokeDexNr = pokeNr;
    level = nivaa;
	liv = piv;
    namn = namngje(pokeNr);
}

string Pokemon::namngje(int x)
{
    switch (x) {
        case 0:
            return "MinssingNo";
        case 1:
            return "Bulbasaur";
        case 2:
            return "Ivysaur";
        case 3:
            return "Venasaur";
        case 4:
            return "Charmander";
        case 5:
            return "Chameleon";
        case 6:
            return "Charizard";
        case 7:
            return "Squirtle";
        case 8:
            return "Wartortle";
        case 9:
            return "Blastoise";
        case 10:
            return "Caterpie";
        case 11:
            return "Metapod";
        case 12:
            return "butterfree";
        case 13:
            return "Weedle";
        case 14:
            return "Kakuna";
        case 15:
            return "Beedrill";
        case 16:
            return "Pidgey";
        case 17:
                return "Pidgeotto";
        case 18:
                return "Pidgeot";
        case 19:
                return "Rattata";
        case 20:
                return "Raticate";
        case 21:
                return "Spearow";
        case 22:
                return "Fearow";
        case 23:
                return "Ekans";
        case 24:
                return "Arbok";
        case 25:
                return "Pikacho";
        case 26:
                return "Raichu";
        case 27:
                return "Sansdshrew";
        case 28:
                return "Sandslash";
        case 29:
                return "Nidoran";
        case 30:
                return "Nidorina";
        case 31:
                return "Nidoqueen";
        case 32:
                return "Nidoran";
        case 33:
                return "Nidorino";
        case 34:
                return "Nidoking";
        case 35:
                return "Clefairy";
        case 36:
                return "Clefable";
        case 37:
                return "Vulpix";
        case 38:
                return "Ninetales";
        case 39:
                return "Jigglypuff";
        case 40:
                return "Wigglytuff";
        case 41:
                return "Zubat";
        case 42:
                return "Golbat";
        case 43:
                return "Oddish";
        case 44:
                return "Gloom";
        case 45:
                return "Vileplume";
        case 46:
                return "Paras";
        case 47:
                return "Parasect";
        case 48:
                return "Venonat";
        case 49:
                return "Venomoth";
        case 50:
                return "Diglett";
        case 51:
                return "Dugtrio";
        case 52:
                return "Meowth";
        case 53:
                return "Persian";
        case 54:
                return "Psyduck";
        case 55:
                return "Golduck";
        case 56:
                return "Mankey";
        case 57:
                return "Primeape";
        case 58:
                return "Growlithe";
        case 59:
                return "Arcanine";
        case 60:
                return "poløiwag";
        case 61:
                return "Poliwhirl";
        case 62:
                return "Poliwrath";
        case 63:
                return "Abra";
        case 64:
                return "Kadabra";
        case 65:
                return "Alakazam";
        case 66:
                return "Machop";
        case 67:
                return "Machoke";
        case 68:
                return "Machamp";
        case 69:
                return "Bellsprout";
        case 70:
                return "Weepinbell";
        case 71:
                return "Victreebel";
        case 72:
                return "Tentacool";
        case 73:
                return "Tentacruel";
        case 74:
                return "Geodude";
        case 75:
                return "Graveler";
        case 76:
                return "Golem";
        case 77:
                return "Ponyta";
        case 78:
                return "Rapidash";
        case 79:
                return "Slowpoke";
        case 80:
                return "Slowbro";
        case 81:
                return "Magnemite";
        case 82:
                return "Magnton";
        case 83:
                return "Farfetch'd";
        case 84:
                return "Doduo";
        case 85:
                return "Dodrio";
        case 86:
                return "Seel";
        case 87:
                return "Dewgong";
        case 88:
                return "Grimer";
        case 89:
                return "Muk";
        case 90:
                return "Shellder";
        case 91:
                return "Cloyster";
        case 92:
                return "Gastly";
        case 93:
                return "Haunter";
        case 94:
                return "Gengar";
        case 95:
                return "Onix";
        case 96:
                return "Drowzee";
        case 97:
                return "Hypno";
        case 98:
                return "Krabby";
        case 99:
                return "Kingler";
        case 100:
                return "Voltorb";
        case 101:
                return "Electrode";
        case 102:
                return "Exeggcute";
        case 103:
                return "Exeggutor";
        case 104:
                return "Cubone";
        case 105:
                return "Marowak";
        case 106:
                return "Hitmonlee";
        case 107:
                return "Hitmonchan";
        case 108:
                return "Lickitung";
        case 109:
                return "Koffing";
        case 110:
                return "Weezing";
        case 111:
                return "Rhyhorn";
        case 112:
                return "Rhydon";
        case 113:
                return "Chansey";
        case 114:
                return "Tangela";
        case 115:
                return "Kangaskhan";
        case 116:
                return "Horsea";
        case 117:
                return "Seadra";
        case 118:
                return "Goldeem";
        case 119:
                return "Seaking";
        case 120:
                return "Staryu";
        case 121:
                return "Starmie";
        case 122:
                return "Mr.Mime";
        case 123:
                return "Scyther";
        case 124:
                return "Jynx";
        case 125:
                return "Electrabuzz";
        case 126:
                return "Magmar";
        case 127:
                return "Pinsir";
        case 128:
                return "Tauros";
        case 129:
                return "Magikarp";
        case 130:
                return "Gyarados";
        case 131:
                return "Lapras";
        case 132:
                return "Ditto";
        case 133:
                return "Eevee";
        case 134:
                return "Vaporeon";
        case 135:
                return "Jolteon";
        case 136:
                return "Flareon";
        case 137:
                return "Porygon";
        case 138:
                return "Amanyte";
        case 139:
                return "Omstar";
        case 140:
                return "Kabuto";
        case 141:
                return "Kabutops";
        case 142:
                return "Aerodactyl";
        case 143:
                return "Snorlax";
        case 144:
                return "Articuno";
        case 145:
                return "Zapdos";
        case 146:
                return "Moltres";
        case 147:
                return "Dratini";
        case 148:
                return "Dragonair";
        case 149:
                return "Dragonite";
        case 150:
                return "Mewtwo";
        case 151:
                return "Mew";
        default:
                return"for hogt / ugyldig";

    }
}

int Pokemon::angrip(type angrep)
{

    switch(art){

    case NORMAL:
        switch (angrep){
            case GHOST:
                return 0;
            case FIGHTING:
                return 200;
            default:
                return 100;
        }
        break;


    case FIRE:
        switch (angrep){
            case FIRE:
                return 50;
            case GRASS:
                return 50;
            case ICE:
                return 50;
            case BUG:
                return 50;
            case STEEL:
                return 50;
            case FAIRY:
                return 50;
            case ROCK:
                return 200;
            case WATER:
                return 200;
            case GROUND:
                return 200;
            default:
                return 100;
        }
        break;

    case WATER:
        switch (angrep){
            case FIRE:
                return 50;
            case WATER:
                return 50;
            case ICE:
                return 50;
            case STEEL:
                return 50;
            case ELECTRIC:
                return 200;
            case GRASS:
                return 200;
            default:
                return 100;
        }
        break;
    case ELECTRIC:
        switch(angrep){
            case ELECTRIC:
                return 50;
            case FLYING:
                return 50;
            case STEEL:
                return 50;
            case GROUND:
                return 200;
            default:
                return 100;
        }
        break;
    case GRASS:
        switch (angrep){
              case NORMAL:
                  return 100;
              case FIRE:
                  return 200;
              case WATER:
                  return 50;
              case ELECTRIC:
                  return 50;
              case GRASS:
                  return 50;
              case ICE:
                  return 200;
              case FIGHTING:
                  return 100;
              case POISON:
                  return 200;
              case GROUND:
                  return 50;
              case FLYING:
                  return 200;
              case PSYCHIC:
                  return 100;
              case BUG:
                  return 200;
              case ROCK:
                  return 100;
              case GHOST:
                  return 100;
              case DRAGON:
                  return 100;
              case DARK:
                  return 100;
              case STEEL:
                  return 100;
              case FAIRY:
                  return 100;
              default:
                  return 100;
              }
              break;
          case ICE:
             switch (angrep){
                case NORMAL:
                    return 100;
                case FIRE:
                    return 200;
                case WATER:
                    return  100;
                case ELECTRIC:
                    return 100;
                case GRASS:
                    return 100;
                case ICE:
                    return 50;
                case FIGHTING:
                    return 200;
                case POISON:
                    return 100;
                case GROUND:
                    return 100;
                case FLYING:
                    return 100;
                case PSYCHIC:
                    return 100;
                case BUG:
                    return 100;
                case ROCK:
                    return 200;
                case GHOST:
                    return 100;
                case DRAGON:
                    return 100;
                case DARK:
                    return 100;
                case STEEL:
                    return 200;
                case FAIRY:
                    return 100;
                default:
                    return 100;
                }
                break;
            case FIGHTING:
                switch (angrep){
                  case NORMAL:
                      return 100;
                  case FIRE:
                      return 100;
                  case WATER:
                      return  100;
                  case ELECTRIC:
                      return 100;
                  case GRASS:
                      return 100;
                  case ICE:
                      return 100;
                  case FIGHTING:
                      return 100;
                  case POISON:
                      return 100;
                  case GROUND:
                      return 100;
                  case FLYING:
                      return 200;
                  case PSYCHIC:
                      return 200;
                  case BUG:
                      return 50;
                  case ROCK:
                      return 50;
                  case GHOST:
                      return 100;
                  case DRAGON:
                      return 100;
                  case DARK:
                      return 50;
                  case STEEL:
                      return 100;
                  case FAIRY:
                      return 200;
                  default:
                      return 100;
                  }
                  break;
      case 18:
          switch (angrep){
            case NORMAL:
                return 100;
            case FIRE:
                return 100;
            case WATER:
                return  100;
            case GRASS:
                return 100;
            case ICE:
                return 100;
            case FIGHTING:
                return 100;
            case POISON:
                return 100;
            case GROUND:
                return 100;
            case FLYING:
                return 100;
            case PSYCHIC:
                return 100;
            case BUG:
                return 100;
            case ROCK:
                return 100;
            case GHOST:
                return 100;
            case DRAGON:
                return 100;
            case DARK:
                return 100;
            case STEEL:
                return 100;
            case FAIRY:
                return 100;
            default:
                return 100;
            }
            break;
        case POISON:
            switch (angrep){
              case NORMAL:
                  return 100;
              case FIRE:
                  return 100;
              case WATER:
                  return  100;
              case ELECTRIC:
                  return 100;
              case GRASS:
                  return 50;
              case ICE:
                  return 100;
              case FIGHTING:
                  return 50;
              case POISON:
                  return 50;
              case GROUND:
                  return 200;
              case FLYING:
                  return 100;
              case PSYCHIC:
                  return 200;
              case BUG:
                  return 50;
              case ROCK:
                  return 100;
              case GHOST:
                  return 100;
              case DRAGON:
                  return 100;
              case DARK:
                  return 100;
              case STEEL:
                  return 100;
              case FAIRY:
                  return 50;
              default:
                  return 100;
              }
              break;
          case GROUND:
              switch (angrep){
                case NORMAL:
                    return 100;
                case FIRE:
                    return 100;
                case WATER:
                    return  200;
                case ELECTRIC:
                    return 0;
                case GRASS:
                    return 200;
                case ICE:
                    return 200;
                case FIGHTING:
                    return 100;
                case POISON:
                    return 50;
                case GROUND:
                    return 100;
                case FLYING:
                    return 100;
                case PSYCHIC:
                    return 100;
                case BUG:
                    return 100;
                case ROCK:
                    return 50;
                case GHOST:
                    return 100;
                case DRAGON:
                    return 100;
                case DARK:
                    return 100;
                case STEEL:
                    return 100;
                case FAIRY:
                    return 100;
                default:
                    return 100;
                }
                break;
            case FLYING:
                switch (angrep){
                  case NORMAL:
                      return 100;
                  case FIRE:
                      return 100;
                  case WATER:
                      return 100;
                  case ELECTRIC:
                      return 200;
                  case GRASS:
                      return 50;
                  case ICE:
                      return 200;
                  case FIGHTING:
                      return 50;
                  case POISON:
                      return 100;
                  case GROUND:
                      return 100;
                  case FLYING:
                      return 100;
                  case PSYCHIC:
                      return 100;
                  case BUG:
                      return 50;
                  case ROCK:
                      return 200;
                  case GHOST:
                      return 100;
                  case DRAGON:
                      return 100;
                  case DARK:
                      return 100;
                  case STEEL:
                      return 100;
                  case FAIRY:
                      return 100;
                  default:
                      return 100;
                  }
                  break;
              case PSYCHIC:
                  switch (angrep){
                    case NORMAL:
                        return 100;
                    case FIRE:
                        return 100;
                    case WATER:
                        return 100;
                    case ELECTRIC:
                        return 100;
                    case GRASS:
                        return 100;
                    case ICE:
                        return 100;
                    case FIGHTING:
                        return 50;
                    case POISON:
                        return 100;
                    case GROUND:
                        return 100;
                    case FLYING:
                        return 100;
                    case PSYCHIC:
                        return 50;
                    case BUG:
                        return 50;
                    case ROCK:
                        return 100;
                    case GHOST:
                        return 50;
                    case DRAGON:
                        return 100;
                    case DARK:
                        return 50;
                    case STEEL:
                        return 100;
                    case FAIRY:
                        return 100;
                    default:
                        return 100;
                    }
                    break;
            case BUG:
                switch (angrep){
                  case NORMAL:
                      return 100;
                  case FIRE:
                      return 200;
                  case WATER:
                      return 100;
                  case ELECTRIC:
                      return 100;
                  case GRASS:
                      return 50;
                  case ICE:
                      return 100;
                  case FIGHTING:
                      return 50;;
                  case POISON:
                      return 100;
                  case GROUND:
                      return 50;;
                  case FLYING:
                      return 200;
                  case PSYCHIC:
                      return 100;
                  case BUG:
                      return 100;
                  case ROCK:
                      return 200;
                  case GHOST:
                      return 100;
                  case DRAGON:
                      return 100;
                  case DARK:
                      return 100;
                  case STEEL:
                      return 100;
                  case FAIRY:
                      return 100;
                  default:
                      return 100;
                  }
                  break;
              case ROCK:
                  switch (angrep){
                    case NORMAL:
                        return 50;
                    case FIRE:
                        return 50;
                    case WATER:
                        return 200;
                    case ELECTRIC:
                        return 100;
                    case GRASS:
                        return 200;
                    case ICE:
                        return 100;
                    case FIGHTING:
                        return 200;
                    case POISON:
                        return 50;
                    case GROUND:
                        return 200;
                    case FLYING:
                        return 50;
                    case PSYCHIC:
                        return 100;
                    case BUG:
                        return 100;
                    case ROCK:
                        return 100;
                    case GHOST:
                        return 100;
                    case DRAGON:
                        return 100;
                    case DARK:
                        return 100;
                    case STEEL:
                        return 200;
                    case FAIRY:
                        return 100;
                    default:
                        return 100;
                    }
                    break;
                case GHOST:
                    switch (angrep){
                      case NORMAL:
                          return 0;
                      case FIRE:
                          return 100;
                      case WATER:
                          return 100;
                      case ELECTRIC:
                          return 100;
                      case GRASS:
                          return 100;
                      case ICE:
                          return 100;
                      case FIGHTING:
                          return 0;
                      case POISON:
                          return 50;
                      case GROUND:
                          return 100;
                      case FLYING:
                          return 100;
                      case PSYCHIC:
                          return 100;
                      case BUG:
                          return 50;
                      case ROCK:
                          return 100;
                      case GHOST:
                          return 200;
                      case DRAGON:
                          return 100;
                      case DARK:
                          return 200;
                      case STEEL:
                          return 100;
                      case FAIRY:
                          return 100;
                      default:
                          return 100;
                      }
                      break;
                case DRAGON:
                    switch (angrep){
                    case NORMAL:
                        return 100;
                    case FIRE:
                        return 50;
                    case WATER:
                        return 50;
                    case ELECTRIC:
                        return 50;
                    case GRASS:
                        return 50;
                    case ICE:
                        return 200;
                    case FIGHTING:
                        return 100;
                    case POISON:
                        return 100;
                    case GROUND:
                        return 100;
                    case FLYING:
                        return 100;
                    case PSYCHIC:
                        return 100;
                    case BUG:
                        return 100;
                    case ROCK:
                        return 100;
                    case GHOST:
                        return 100;
                    case DRAGON:
                        return 200;
                    case DARK:
                        return 100;
                    case STEEL:
                        return 100;
                    case FAIRY:
                        return 200;
                    default:
                        return 100;
                    }
                    break;
                case DARK:
                    switch (angrep){
                      case NORMAL:
                          return 100;
                      case FIRE:
                          return 100;
                      case WATER:
                          return 100;
                      case ELECTRIC:
                          return 100;
                      case GRASS:
                          return 100;
                      case ICE:
                          return 100;
                      case FIGHTING:
                          return 200;
                      case POISON:
                          return 100;
                      case GROUND:
                          return 100;
                      case FLYING:
                          return 100;
                      case PSYCHIC:
                          return 0;
                      case BUG:
                          return 200;
                      case ROCK:
                          return 100;
                      case GHOST:
                          return 50;
                      case DRAGON:
                          return 100;
                      case DARK:
                          return 50;
                      case STEEL:
                          return 100;
                      case FAIRY:
                          return 200;
                      default:
                          return 100;
                      }
                      break;
                case STEEL:
                  switch (angrep){
                    case NORMAL:
                        return 50;
                    case FIRE:
                        return 200;
                    case WATER:
                        return 100;
                    case ELECTRIC:
                        return 100;
                    case GRASS:
                        return 50;
                    case ICE:
                        return 50;
                    case FIGHTING:
                        return 200;
                    case POISON:
                        return 100;
                    case GROUND:
                        return 200;
                    case FLYING:
                        return 50;
                    case PSYCHIC:
                        return 50;
                    case BUG:
                        return 50;
                    case ROCK:
                        return 50;
                    case GHOST:
                        return 100;
                    case DRAGON:
                        return 50;
                    case DARK:
                        return 100;
                    case STEEL:
                        return 50;
                    case FAIRY:
                        return 50;
                    default:
                        return 100;
                    }
                    break;
                case FAIRY:
                    switch (angrep){
                      case NORMAL:
                          return 100;
                      case FIRE:
                          return 100;
                      case WATER:
                          return 100;
                      case ELECTRIC:
                          return 100;
                      case GRASS:
                          return 100;
                      case ICE:
                          return 100;
                      case FIGHTING:
                          return 50;
                      case POISON:
                          return 200;
                      case GROUND:
                          return 100;
                      case FLYING:
                          return 100;
                      case PSYCHIC:
                          return 100;
                      case BUG:
                          return 50;
                      case ROCK:
                          return 100;
                      case GHOST:
                          return 100;
                      case DRAGON:
                          return 0;
                      case DARK:
                          return 50;
                      case STEEL:
                          return 200;
                      case FAIRY:
                          return 100;
                      default:
                          return 100;
                      }
                break;

        }
}

void Pokemon::printPok()
{
    int x = pokeDexNr;
    char filnamn[3];

        if (x <= 9 || x <= 1 ){
            filnamn[0] = x + 48;
            filnamn[1] = '\0';
            filnamn[2] = '\0';
            filnamn[3] = '\0';
        }
        if (x >= 10 && x <= 99) {
            filnamn[0] = (x / 10) + 48;
            filnamn[1] = (x % 10) + 48;
            filnamn[2] = '\0';
            filnamn[3] = '\0';
        }
        if ( x >= 100){
            filnamn[0] = (x / 100) + 48;
            filnamn[1] = ((x -100) / 10) + 48;
            filnamn[2] = (x % 10) + 48;
            filnamn[3] = '\0';

        }

    //cout << filnamn << endl;
    ifstream  ifs;
    char mappe[] = "kunstverk/";
    strcat(mappe, filnamn);
    ifs.open(mappe);
    string out = getFileContents(ifs);
    cout << out;
}

string Pokemon::pokString()
{
    int x = pokeDexNr;
    char filnamn[3];

        if (x <= 9 || x <= 1 ){
            filnamn[0] = x + 48;
            filnamn[1] = '\0';
            filnamn[2] = '\0';
            filnamn[3] = '\0';
        }
        if (x >= 10 && x <= 99) {
            filnamn[0] = (x / 10) + 48;
            filnamn[1] = (x % 10) + 48;
            filnamn[2] = '\0';
            filnamn[3] = '\0';
        }
        if ( x >= 100){
            filnamn[0] = (x / 100) + 48;
            filnamn[1] = ((x -100) / 10) + 48;
            filnamn[2] = (x % 10) + 48;
            filnamn[3] = '\0';

        }

    //cout << filnamn << endl;
    ifstream  ifs;
    char mappe[] = "kunstverk/";
    strcat(mappe, filnamn);
    ifs.open(mappe);
    string out = getFileContents(ifs);
    return out;
}
