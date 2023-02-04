#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TEAMS 3
#define STUDENTS 2

int main()
{
    char alunos[TEAMS][STUDENTS][120];
    char option, search[120], sobrenome[60];
    for(int i = 0; i<TEAMS; i++){
        printf("Equipe %d:\n", i+1);
        for(int j = 0; j<STUDENTS; j++){
            printf("Nome do %do aluno: ", j+1);
            scanf("%s", alunos[i][j]);
            printf("Sobrenome do %do aluno: ", j+1);
            scanf("%s", sobrenome);
            strcat(alunos[i][j], " ");
            strcat(alunos[i][j], sobrenome);
        }
    }
    printf("Deseja consultar a equipe de um aluno? S/N\n");
    scanf(" %c", &option);
    while(toupper(option)=='S'){
        printf("Insira o nome de um aluno:\n");
        scanf("%s", search);
        printf("Insira o sobrenome do aluno: ");
        scanf("%s", sobrenome);
        strcat(search, " ");
        strcat(search, sobrenome);
        int team = 0;
        for(int i = 0; i<TEAMS; i++){
            for(int j = 0; j<STUDENTS; j++){
                if(strcmp(alunos[i][j],search)==0){
                team = i+1;
                break;
                }
            }
        }
        if(team!=0)
        printf("%s eh da equipe %d\n", search, team);
        else
        printf("Aluno nao encontrado\n");
        printf("Deseja consultar de outro aluno? S/N\n");
        scanf(" %c", &option);
    }
    return 0;
}
