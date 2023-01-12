
#include <stdio.h>

int scanPar()
{
    int a;
    while(1)
    {
    printf("Digite um valor inteiro par:\n");
    scanf("%d", &a);
    if(a%2==0)
    return a;
    else
    printf("Erro! valor nao e par!\n");
    }
}

int perfect(int a)
{
    int soma = 0;
    for(int c=1; c<a; c++){
        if(a%c==0)
        soma += c;
    }
    return a == soma;
}

int main()
{
    int n;
    n = scanPar();
    if(perfect(n))
    printf("%d eh perfeito", n);
    else
    printf("%d nao eh perfeito", n);
    return 0;
}
