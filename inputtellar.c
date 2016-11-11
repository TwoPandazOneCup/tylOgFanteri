#include"stdio.h"
#define LOWER   0
#define UPPER   300
#define STEP    20
void main()
{
    long nc = 0;
    long nt = 0;
    long nl = 1;
    long ns = 0;
    int c;
    while ((c = getchar()) != EOF){
       if (c != '\n') ++nc;
       if (c == '\n') ++nl;
       if (c == '\t') ++nt;
       if (c == ' ') ++ns;
    }     
    printf("\n%ld\t%ld\t%ld\t%ld \n", nc, nl, nt, ns);

}
