
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ler(){
    float n;
    do{
    printf("Digite um numero positivo entre 0 e 1:\n");
    scanf("%f", &n);
    if(n>=0&&n<=1)
        return n;
    printf("Erro! Digite um numero positivo entre 0 e 1:\n");
    }while(n<0||n>1);
}

float arctan(float x){
    float arctan = x, k = 3, sign = -1;
    while(fabs(pow(x, k)/k)>0.0001){
        arctan += pow(x, k)/k*sign;
        k += 2;
        sign *= -1;
    }
    return arctan;
}

void printHF(float n){
    printf("Numero inserido: %.3f\n", n);
    printf("Arco tangente do numero: %.3f radianos\n", arctan(n));
}

int main()
{
    float n = ler();
    printHF(n);
}
