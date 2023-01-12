
#include <stdio.h>

int scanNat()
{
    int a;
    while(1)
    {
    printf("Digite um numero natural:\n");
    scanf("%d", &a);
    if(a>=0)
    return a;
    else
    printf("Erro! valor nao e natural!\n");
    }
}

int fat(int a)
{
    int produto = 1;
    for(int c=1; c<=a; c++){
        produto *= c;
    }
    return produto;
}

int main()
{
    int n;
    n = scanNat();
    printf("o fatorial de %d eh %d", n, fat(n));
    return 0;
}
