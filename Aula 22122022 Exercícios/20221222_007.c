#include <stdio.h>

int main()
{
    float massa;
    int tempo=0, segundos=0, minutos=0, horas=0;
    printf("Digite a massa inicial, em gramas:\n");
    scanf("%fg", &massa);
    do{
        massa/=2;
        tempo+=50;
    }while(massa>0.5);
    segundos = tempo%60;
    minutos = ((tempo-segundos)/60)%60;
    horas = (tempo-minutos*60-segundos)/3600;
    printf("Tempo para a massa se tornar menor que 0.5:\n%dh:%dm:%ds", horas, minutos, segundos);
    return 0;
}