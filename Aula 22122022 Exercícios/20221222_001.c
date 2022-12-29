#include <stdio.h>
#include <math.h>

int main()
{
    float y, x=0, aux;
    printf("Digite um numero positivo:\n");
    scanf("%f", &y);
    x = y/2;
    do{
        aux = x;
        x = x-(pow(x,2)-y)/(2*x);
    }while(fabs(x-aux)>0.1);
    printf("Resultado da raiz quadrada:\n %.1f\n", aux);
    printf("Resultado da funcao sqrt():\n %.1f\n", sqrt(y));
    return 0;
}
