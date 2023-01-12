
#include <stdio.h>

int contar(int n, int d){
    int cont=0;
    while (n > 0){
        if ((n%10)==d)
            cont++;
        n=n/10;
    }
    return cont;
}

int length(int n){
    int cont=0;
    while (n > 0){
        cont++;
        n=n/10;
    }
    return cont;
}

int isPermutacao(int a, int b){
    int cont=0;
    int c = a;
    while (c > 0){
        if (contar(a, c%10) == contar(b, c%10))
            cont++;
        c=c/10;
    }
    return cont==length(b);
}

int main()
{
    int a, b;
    printf("Digite um numero A:\n");
    scanf("%d", &a);
    printf("Digite um numero B:\n");
    scanf("%d", &b);
    if(isPermutacao(a, b))
    printf("%d eh permutacao de %d", a, b);
    else
    printf("%d nao eh permutacao de %d", a, b);
    return 0;
}
