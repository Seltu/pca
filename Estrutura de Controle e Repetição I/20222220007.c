#include <stdio.h>
#include <ctype.h>

int main()
{
    float maior[4] = {0,0,0,0}, menor[4] = {0,0,0,0}, valor, media = 0;
    int aluno = 1, running = 1;
    char option;
    while(running){
        printf("Aluno %d:\n", aluno);
        media = 0;
        for(int i = 0; i < 3; i++){
            printf("Digite a nota do aluno no exercicio %d:\n", i+1);
            scanf("%f", &valor);
            media += valor;
            if(valor>maior[i])
                maior[i] = valor;
            if(valor<menor[i])
                menor[i] = valor;
        }
        media/=3;
        if(media>maior[4])
            maior[4] = media;
        if(media<menor[4])
            menor[4] = media;
        int opt = 1;
        while(opt){
            printf("Deseja inserir as notas de mais um aluno? S/N:\n");
            option = getchar();
            if(toupper(option)=='N'){
                running = 0;
                opt = 0;
            }
            else if (toupper(option)=='S')
                opt = 0;
            else
                printf("ERRO! Responda somente S ou N:\n");
        }
        aluno++;
    }
    for(int i = 0; i < 3; i++){
            printf("Exercicio %d:\n", i+1);
            printf("Maior nota: %.2f\n", maior[i]);
            printf("Menor nota: %.2f\n", menor[i]);
            printf("\n");
        }
    printf("Maior media final: %.2f\n", maior[4]);
    printf("Menor media final: %.2f\n", menor[4]);
}
