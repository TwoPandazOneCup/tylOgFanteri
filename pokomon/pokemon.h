using namespace std;
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


        }
        if (art ==BUG)
            if( angrep == GRASS || angrep == FIGHTING
                || angrep == GROUND)
                return 50;
            else if(angrep == FIRE || angrep == FLYING || angrep == ROCK)
                return 200;
            else return 100;

        if (art == ROCK)
            if(angrep == NORMAL || angrep == FIRE || angrep == POISON
                || angrep == FLYING)
                return 50;
            else if (angrep == WATER || angrep == GRASS || angrep == FIGHTING
                    ||angrep == GROUND || angrep == STEEL)
                return 200;
            else return 100;

    }
};

