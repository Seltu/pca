#include <stdio.h>
#include <stdlib.h>


int main()
{
    float F;
    printf("Digite uma temperatura em Farenheit:\n");
    scanf("%f", &F);
    printf("A temperatura em Celsius eh: %.1f", (5 * (F-32) / 9));
    return 0;
}