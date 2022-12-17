#include <stdio.h>
#include <stdlib.h>


int main()
{
    float l;
    printf("Digite a medida do lado de um quadrado:\n");
    scanf("%f", &l);
    float area = l*l;
    printf("A dobro da area do quadrado eh: %.2f", area*2);
    return 0;
}
