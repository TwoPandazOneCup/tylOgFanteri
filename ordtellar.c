/*
 * =====================================================================================
 *
 *       Filename:  ordtellar.c
 *
 *    Description:  ordtellar
 *
 *        Version:  1.0
 *        Created:  11. nov. 2016 kl. 19.27 +0100
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#define YES 1
#define NO  0
#define EOF -1
#include <stdio.h>
void main()
{   
    int c, nl ,nw, nc, inword;

    inword = NO;

    nl = nw = nc = 0;
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            inword = NO;
        else if (inword == NO){
            inword = YES;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}
