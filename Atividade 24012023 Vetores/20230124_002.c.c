#include <stdio.h>
#include <stdlib.h>
#define size 100

void imprimirInversa(int v[], int tamanho);

int main()
{
    int v[size];
    int num;
    int i;
    printf ("Digite a quantidade de numeros a ser lida:\n");
    scanf("%d",&num);
    for (i=0; i < num; i++){
        printf("Digite o %d numero:\n", i+1);
        scanf ("%d", &v[i]);
    }
    imprimirInversa(v,num);
    return 0;
}

void imprimirInversa(int v[], int tamanho){
    int i;
    for (i=tamanho-1; i>=0; i--){
        printf(" %d", v[i]);
    }
}