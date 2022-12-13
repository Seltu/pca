#include <stdio.h>

int
main ()
{
  float b, h;
  printf ("Digite a medida da base do triangulo:\n");
  scanf ("%f", &b);
  printf ("Digite a medida da altura do triangulo:\n");
  scanf ("%f", &h);
  printf ("A area do triangulo e: %f", b * h / 2);
  return 0;
}
