#include <stdio.h>

int *findX(int *start, int *end, int x) {
    while (start < end) {
        if (*start == x) {
            return start;
        }
        start++;
    }
    return NULL;
}

int main() {
    int vet[10] = {10, 9, 2, 7, 2, 5, 4, 3, 2, 1};
    int *start = vet;
    int *end = vet + 10;
    int x = 2;

    int *endereco_valor = NULL;
    while ((endereco_valor = findX(start, end, x)) != NULL) {
        printf("Valor %d encontrado no endereco %p\n", x, endereco_valor);
        start = endereco_valor + 1;
    }
    return 0;
}