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
    float salario = horas*por_hora;
    float inss = salario * 0.08, sindicato = salario * 0.05;
    printf("O seu salario bruto foi: %.2f\n", salario);
    printf("Voce pagou ao INSS: %.2f\n", inss);
    printf("Voce pagou ao sindicato: %.2f\n", sindicato);
    printf("O seu salario liquido foi: %.2f\n", salario - salario * 0.11 - inss - sindicato);
    return 0;
}