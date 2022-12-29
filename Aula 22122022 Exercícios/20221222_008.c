#include <stdio.h>

int main()
{
    int n, flag, a, b, c;
    printf("Digite um numero inteiro positivo N:\n");
    scanf("%d", &n);
    printf("Hipotenusas de numeros inteiros entre 1 e N:\n");
    for(c=1; c<=n; c++){
        flag=0;
        for(a=0; a<c; a++)
            for(b=0; b<a; b++){
                if(c*c==a*a+b*b)
                flag=1;
            }
        if(flag)
            printf("%d\n", c);
    }
}