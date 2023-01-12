#include <stdio.h>
#include <stdlib.h>

int scanIntIntervalo(char nome, int inter, int valo)
{
    int a;
    while(1)
    {
    printf("Digite um valor inteiro %c entre %d e %d:\n", nome, inter, valo);
    scanf("%d", &a);
    if(a>=inter&&valo>=a)
    return a;
    else
    printf("Erro! valor fora do intervalo!\n");
    }
}

float percentual(int valor, int total)
{
    return 100*valor/total;
}

float absdif(float a, float b)
{
    return abs(a-b);
}


int main()
{
    int o, x, y;
    x = scanIntIntervalo('X', 0, 1000);
    y = scanIntIntervalo('Y', 0, 1000);
    if (x>y)
    {
        o = x;
        x = y;
        y = o;
    }
    printf("A porcentagem do maior em relacao ao menor eh:\n%.1f%%\n", percentual(x,y));
    printf("O valor absoluto da diferenca entre os dois valores eh:\n%.1f\n", absdif(x,y));
    return 0;
}
