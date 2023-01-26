#include <stdio.h>
#include <stdlib.h>
#define size 100

void countRolls(int rolls[], int quant){
    int aux, cont;
    for(aux = 1; aux <= 6; aux++){
        cont = 0;
        for(int j = 0; j < quant; j++){
            if(rolls[j] == aux){
                cont++;
            }
        }
        printf("Quantidade de %d jogados: %d\n", aux, cont);
    }
}

int* diceRoll(int lower, int upper, int quant) {
    static int rolls[size];
    for (int i = 0; i < quant; i++){
        rolls[i] = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", rolls[i]);
    }
    printf("\n");
    return rolls;
}

int readBetween(int lb, int ub){
    int n;
    do {
        scanf("%d", &n);
        if(n > ub || n < lb)
            printf("Valor invalido! Digite um numero entre %d e %d:\n", lb, ub);
    } while (n > ub || n < lb);
    return n;
}

int main(){
    int q, *rolls;
    printf("Digite quantas vezes o dado deve ser jogado (entre 0 e 100):\n");
    q = readBetween(0, 100);
    rolls = diceRoll(1, 6, q);
    countRolls(rolls, q);
    return 0;
}