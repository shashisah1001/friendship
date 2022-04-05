
#include <stdio.h>
#include <math.h>




int main ()
{

  int divisior,dividend;
  int quotient=0,remainder=0;

  printf ("ENTER THE dividend\t");

  scanf ("%d", &dividend);
  
  
  printf ("ENTER THE divisior \t");
  scanf ("%d", &divisior);
  
  quotient=dividend/divisior;
  remainder=dividend%divisior;

  printf ("quotient IS  %d \n , remainder IS %d", quotient, remainder);

  return 0;
}