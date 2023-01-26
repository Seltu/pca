#include <stdio.h>
#define size 3

int* readArray(char nome) {
    static int r[size];
    printf("Digite %d numeros inteiros elementos do vetor %c:\n", size, nome);
    for(int i=0; i<size; i++){
        scanf("%d", &r[i]);
    }
    return r;
}

int produtoEscalar(int x[], int y[], int n){
    int r = 0;
    for(int i=0; i<n; i++){
        r += x[i]*y[i];
    }
    return r;
}

int main()
{
    int *x, *y;
    x = readArray('x');
    y = readArray('y');
    printf("O produto escalar entre os vetores eh:\n%d\n", produtoEscalar(x, y, size));
    return 0;
}