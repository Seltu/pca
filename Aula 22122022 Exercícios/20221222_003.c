#include <stdio.h>

int main()
{
    int read, pares=0, impares=0;
    printf("Digite numeros inteiros positivos menores que 1000:\n");
    scanf("%d", &read);
    do{
        if(read%2==0)
        pares += read;
        else
        impares += read;
        scanf("%d", &read);
    }while(read<=1000);
    printf("Numero maior que 1000 inserido, processo encerrado:\n");
    printf("Soma dos pares:\n %d\nSoma dos impares:\n %d\n", pares, impares);
}
