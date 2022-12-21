#include <stdio.h>

int main()
{
    int soma = 0, valor;
    for(int c = 0; c < 50; c++){
        printf("Digite o %do numero:\n", c+1);
        scanf("%d", &valor);
        if(!valor%2==0&&valor>100&valor<200)
            soma+=valor;
    }
    printf("A soma dos valores impares entre 100 e 200 eh: %d", soma);
    return 0;
}
