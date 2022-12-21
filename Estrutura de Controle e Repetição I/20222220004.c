#include <stdio.h>

int main()
{
    int maior = 0, menor = 0, valor;
    for(int c = 0; c < 20; c++){
        printf("Digite o %do numero:\n", c+1);
        scanf("%d", &valor);
        if(valor>maior)
            maior = valor;
        if(valor<menor)
            menor = valor;
    }
    printf("O menor e maior valor sao:\n%d e %d", maior, menor);
    return 0;
}
