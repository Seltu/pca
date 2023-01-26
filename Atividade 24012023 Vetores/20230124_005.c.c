#include <stdio.h>
#define size 100

int printFat(int nums[], int tamanho){
    int fat;
    printf("Os fatoriais dos numeros informados sao:\n");
    for (int i = 0; i < tamanho; i++){
        for(fat = 1; nums[i] > 1; nums[i] = nums[i] - 1)
            fat *= nums[i];
        printf("%d ", fat);
    }
}

int* readArray(int len) {
    static int r[size];
    printf("Digite %d numeros inteiros (menores que 100):\n", len);
    for(int i=0; i<len; i++){
        do{
            scanf("%d", &r[i]);
            if (r[i] > 100)
                printf("Numero invalido! Digite numeros menores que 100\n");
        } while (r[i] > 100);
    }
    return r;
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
    int q, *nums;
    printf("Digite quantos numeros devem ser lidos (entre 0 e 100):\n");
    q = readBetween(0, 100);
    nums = readArray(q);
    printFat(nums, q);
    return 0;
}