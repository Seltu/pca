
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

int fibo(int n)
{
    int a=0, b=1, aux;
    for(int i = 0; i < n-1; i++) {
    aux = a + b;
    a = b;
    b = aux;
    }
    return aux;
}

int main()
{
    int n;
    n = scanNat();
    printf("o %do numero de fibonacci eh %d", n, fibo(n));
    return 0;
}
