#include <stdio.h>

int main()
{
    int n, m, x=0, y=0, i, j, max=0;
    printf("Digite um numero natural M:\n");
    scanf("%d", &m);
    printf("Digite um numero natural N:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
        if(i*j-i*i+j>max){
        x=i;
        y=j;
        max=i*j-i*i+j;
        }
        }
    }
    printf("Maior resultado:\n%dx%d-%d^2+%d = %d\n", x, y, x, y, max);
    printf("Os valores de X e Y:\n%d, %d\n", x, y);
}