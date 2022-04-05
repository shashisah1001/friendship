#include <stdio.h>
#include <math.h>




int main ()
{

  int n, cube = 0;

  printf ("ENTER THE NUMBER YOU WANT TO CUBE\t");

  scanf ("%d", &n);
  cube = pow (n, 3);

  printf ("CUBE OF NUMBER %d IS %d", n, cube);

  return 0;
}