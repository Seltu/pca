#include <stdio.h>

int main()
{
    float soma=0;
    for(int c=1; c<=50; c++)
        soma += ((c-1)*2+1)/c;
    printf("O resultado da soma:\n %.1f", soma);
    return 0;
}