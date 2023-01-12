#include <stdio.h>
#include <stdlib.h>

void lerPesoGest(float* peso, int* gest)
{
    printf("Digite o peso do feto em gramas:\n");
    scanf("%f", peso);
    printf("Digite a duracao do periodo de gestacao:\n");
    scanf("%d", gest);
}

int avaliarParto(float peso, int gest)
{
    if(peso < 100 || gest < 28)
        return 2;
    if (peso > 2500)
        if(gest/4>7)
            return 1;
        else
            return 0;
    else if ((1500 <= peso <= 2000)&&gest/4>9)
        return 1;
    else
        return 0;
}

int main()
{
    float peso;
    int gest;
    lerPesoGest(&peso, &gest);
    switch (avaliarParto(peso, gest))
    {
    case 0:
        printf("Parto cesariana");
        break;
    case 1:
        printf("Parto normal");
        break;
    case 2:
        printf("Parto nao devera ser realizado, reavaliar clinicamente.\n");
        break;
    }
    return 0;
}
