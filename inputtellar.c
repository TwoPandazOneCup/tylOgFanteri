#define EOF -1
#include <stdio.h>

int main()
{
    int c, i, nwhite, nother, sbokst,smbokst;
    int ndigit[10];
    
    nwhite = nother = sbokst = smbokst = 0;
    for ( i = 0; i < 10; ++i)
        ndigit[i] = i;
    
    while (( c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c+'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else if (c >= 65 && c <= 90)
            ++sbokst; 
        else if (c >= 97 && c <= 122)
            ++smbokst;
        else 
            ++nother;
        
     
    printf("\nwitespace = %d, other = %d, store bokstavar = %d små bokstavar = %d\n ", nwhite, nother, sbokst,smbokst );






    return 0;
}
