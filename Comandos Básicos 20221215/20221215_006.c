#include <stdio.h>
#include <stdlib.h>


int main()
{
    int horas;
    float por_hora;
    printf("Digite o numero de horas trabalhadas do mes:\n");
    scanf("%d", &horas);
    printf("Digite o quanto o usuario ganha por hora:\n");
    scanf("%f", &por_hora);
    printf("O seu salario total do mes foi: %.2f", horas*por_hora);
    return 0;
}