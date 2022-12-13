#include <stdio.h>
#include <ctype.h>

int
main ()
{
  char nome[25], sexo;
  int idade;
  printf ("Digite seu nome:\n");
  scanf ("%s", nome);
  printf ("Digite sua idade:\n");
  scanf ("%d", &idade);
  printf ("Digite seu sexo (ex. M/F):\n");
  scanf ("%s", &sexo);
  if(toupper(sexo) == 'F')
  printf("O usuario e uma mulher");
  else
  printf("O usuario nao e uma mulher");
  return 0;
}
