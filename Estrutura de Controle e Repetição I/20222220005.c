#include <stdio.h>

int main()
{
    int maior = 0, menor = 0, valor;
    for(int c = 0; c < 20; c++){
        printf("Digite o %do numero:\n", c+1);
        int flag = 1;
        while(flag){
        scanf("%d", &valor);
            if(valor>=0){
                flag = 0;
                if(valor>maior)
                    maior = valor;
                if(valor<menor)
                    menor = valor;
            }
            else
                printf("por favor, digite um valor positivo:\n");
        }
    }
    printf("O menor e maior valor sao:\n%d e %d", maior, menor);
    return 0;
}
