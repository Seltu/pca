#include <stdio.h>
#define size 5

int* readArray() {
    static int r[size];
    printf("Digite %d numeros inteiros:\n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &r[i]);
    }
    return r;
}

void printArray(int ar[], int tamanho){
    printf("{");
    for(int i=0; i<tamanho; i++){
        if(i==0)
        printf("%d", ar[i]);
        else
        printf(", %d", ar[i]);
    }
    printf("}\n");
}

void selectionSort(int ar[], int tamanho) {
    int menor, aux;
    for(int sorted = 0; sorted<tamanho; sorted++){
        menor = sorted;
    for(int i = sorted; i<tamanho; i++){
        if(ar[i]<ar[menor])
        menor = i;
    }
        aux = ar[sorted];
        ar[sorted] = ar[menor];
        ar[menor] = aux;
    }
}


int main()
{
    int *array;
    array = readArray();
    selectionSort(array, size);
    printArray(array, size);
    return 0;
}