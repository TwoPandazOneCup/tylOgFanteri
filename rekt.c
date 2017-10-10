#include <stdlib.h>
#include <stdio.h>
double max(double a, double b)
{
  if (a > b) return a;
  else return b;
}
double min(double a, double b)
{
  if( a < b) return a;
  else return b;
}


typedef struct {
  double x;
  double x2;
  double y;
  double y2;
  double xLengd;
  double yLengd;
}Rektangel;

int main (){
  short noteLengd = 0x6ff;
  int a = 164;
  int b = 16;
  int c = 6400;
  int d = 1280;


    
      for (int i = 0; i < noteLengd;++i)
	printf("%d",a );
       for (int i = 0; i < noteLengd;++i)
	 printf("%d", b);
       for (int i = 0; i < noteLengd;++i)
	 printf("%d", c);
       for (int i = 0; i < noteLengd;++i)
	 printf("%d", d);



    

  
  int i = 0;
  printf("exit success\n");
  return EXIT_SUCCESS;
}
