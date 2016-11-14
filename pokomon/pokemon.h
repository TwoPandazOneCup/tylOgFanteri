using namespace std;
#include <fstream>
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

    type art;
    unsigned short int level = 1;
    unsigned short int pokeDexNr;
    string namn;

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
        x = pokeDexNr;
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

    int angrip(type angrep)
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
};
