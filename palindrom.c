#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    bool like = true;
    char hei[250];
    char er[255];
    char c;
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
    //printf("%d\n", d);
    for (d; d >= 0; --d){
        er[k] = hei[d - 1];
        ++k;
    }
    
    do
    {
        if (er[v] != hei[v]){
            like = 0;
        }
        ++v;
    }  while(like && v < d );

    if (like == 1){   
        printf("\"%s\" er eit palindrom\n", hei);
    } else if (like == 0) {
        printf("\"%s\" er ikkje eit palindrom\n", hei);
    } else {
        printf("veit ikkje\n");
    }
    return 0;
}
