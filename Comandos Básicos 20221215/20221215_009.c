#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a, b;
    float c;
    printf("Digite um numero inteiro A:\n");
    scanf("%d", &a);
    printf("Digite um numero inteiro B:\n");
    scanf("%d", &b);
    printf("Digite um numero real C:\n");
    scanf("%f", &c);
    printf("O produto do dobro de A com metade de B eh: %d\n", a*b);
    printf("A soma do triplo de A com C eh: %.2f\n", a*3+c);
    printf("C elevado ao cubo eh: %.2f\n", c*c*c);
    return 0;
}