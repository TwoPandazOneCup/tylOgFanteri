#include <stdio.h>
int main()
{
  double a = 1;
  double b = 1.64;
  double c = 1.0000001;

  while((a*b) < 100)
  {
    a *= c;
    b *= c;
  }
  printf("%f %f %f \n", a, b, a*b);
  return 0;
    
  
  
}
