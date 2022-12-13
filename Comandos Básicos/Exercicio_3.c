#include <stdio.h>
#include <ctype.h>

int
main ()
{
  float salario;
  printf ("Digite o salario do empregado:\n");
  scanf ("%f", &salario);
  printf("O novo salario e: %.2f", salario*1.1);
  return 0;
}
