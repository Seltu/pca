
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

int main()
{
    int a, b;
    printf("Digite um numero A:\n");
    scanf("%d", &a);
    printf("Digite um numero B:\n");
    scanf("%d", &b);
    printf("%d aparece %d vez(es) em %d", b, contar(a,b), a);
    return 0;
}
