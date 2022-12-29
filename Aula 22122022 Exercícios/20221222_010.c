#include <stdio.h>

int main()
{
    int p, i, impar=1;
    printf("Digite um numero natural p:\n");
    scanf("%d", &p);
    printf("Para os cubos de 1 a %d:\n", p);
    for(int n=1; n<=p; n++){
    printf("%d^2 = %d = ", n, n*n*n);
    for(i=1;i<=n;i++){
        if(i==n)
        printf("%d\n", impar);
        else
        printf("%d+", impar);
        impar+=2;
    }
    }
}