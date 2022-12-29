#include <stdio.h>

int main()
{
    float numbers[15], maior, menor;
    printf("Digite 15 numeros reais:\n");
    for(int c=0; c<15; c++){
        scanf("%f", &numbers[c]);
        if(numbers[c]>maior||c==0)
        maior = numbers[c];
        if(numbers[c]<menor||c==0)
        menor = numbers[c];
    }
    printf("Maior:\n %f\nMenor:\n %f\n", maior, menor);
}
