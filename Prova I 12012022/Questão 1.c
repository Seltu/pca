
#include <stdio.h>

int main()
{
    int aluno = 0;
    float nota = 0, media = 0, maior = 0, menor = 0;
    while(nota>=0){
    media += nota;
    if(nota>maior)
    maior=nota;
    if(nota<menor||aluno==1)
    menor=nota;
    aluno++;
    printf("Digite a nota do aluno %d:\n", aluno);
    scanf("%f", &nota);
    }
    media /= aluno;
    printf("Nota negativa inserida, encerrando:\n");
    printf("A media da turma foi %.1f\n", media);
    printf("A maior nota foi %.1f\n", maior);
    printf("A menor nota foi %.1f\n", menor);
    return 0;
}
