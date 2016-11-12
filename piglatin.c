#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    bool erVokal = true;
    char hei[250];
    char er[255] = "";
    char ay[2] = "ay";
    char way[3] = "way";
    char c = 0;
    int d = 0;
    int i = 0;
    int k = 0;
    int h = 0;
    int v = 0;
    while((c = getchar()) != '\n')
    {
        hei[d] = c;
        ++d;

    }
    hei[d] = 0;
    printf("%d \n", d);

    while(erVokal == true)
    {
        if (
            hei[i] == 'b' 
            || hei[i] == 'c'
            || hei[i] == 'd'    
            || hei[i] == 'f'           
            || hei[i] == 'g'
            || hei[i] == 'h'
            || hei[i] == 'j'
            || hei[i] == 'k'
            || hei[i] == 'l'
            || hei[i] == 'm'
            || hei[i] == 'n'
            || hei[i] == 'p'
            || hei[i] == 'q'
            || hei[i] == 'r'
            || hei[i] == 's'
            || hei[i] == 't'
            || hei[i] == 'v'
            || hei[i] == 'w'
            || hei[i] == 'x'
            || hei[i] == 'z')
        {
            er[i] = hei[i];
            ++k;
            while(hei[h] != 0){
                hei[h] = hei[h+1];
                ++h;
            }
        }
         else
        {
            erVokal = false;
        }
    }
    if (k == 0){
        strncat(hei, way, 3 );
        d = d + 3;
    }
    else{
        strncat(er, ay, 2);
        strncat(hei, er, (k+2));
    }
    printf("%d %d \n", d , i);

    while(hei[v] != 0){
            printf("%c", hei[v]);
            ++v;
    }
    printf("\n");
    //puts(er);
    printf("\n");
    return 0;
}

