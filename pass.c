#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main()
{
  srand(time(NULL));
  int gjer = 7;
  
  char rekke[0xff];
  while(gjer != 0)
    {
      gjer -= 1;
  int tilf = rand() % 48 + 74;
  rekke[gjer] = tilf;

  if ((tilf <= 58 && tilf >=  63) || (tilf <= 91 && tilf >= 96))
    break;
      }
  printf("%s\n", rekke);
}

