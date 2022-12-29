#include <stdio.h>

int main()
{
    int x, soma = 0;
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &x);
    for(int c=1; c<=x/2; c++){
    if(x%c==0){
      soma += c;
    }
    }
    if(x == soma)
        printf("%d eh perfeito", x);
    else
        printf("%d nao eh perfeito", x);
    return 0;
}