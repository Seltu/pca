#include <stdio.h>
#include <stdlib.h>


int main()
{
    float C;
    printf("Digite uma temperatura em Celsius:\n");
    scanf("%f", &C);
    printf("A temperatura em Farenheit eh: %.1f", C * 9 / 5 + 32);
    return 0;
}