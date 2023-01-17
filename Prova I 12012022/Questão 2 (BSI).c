/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int lerInt(){
    int n;
    do{
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &n);
    if(n>=0)
        return n;
    printf("Erro! Digite um numero inteiro positivo:\n");
    }while(n<0);
}

int hiperfatorial(int n){
    int hyperfat = 0;
    for(int c=0;c<=n;c++){
        hyperfat += pow(c,c);
    }
    return hyperfat;
}

void printHF(int n){
    printf("Numero inserido: %d\n", n);
    printf("Hiperfatorial do numero: %d\n", hiperfatorial(n));
}

int main()
{
    int n = lerInt();
    printHF(n);
}
