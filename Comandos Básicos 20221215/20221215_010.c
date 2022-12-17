#include <stdio.h>

int main()
{
    float altura;
    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
    printf("seu peso ideal eh: %.1fkg", (72.7*altura) - 58);
    return 0;
}
