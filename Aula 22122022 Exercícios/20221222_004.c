#include <stdio.h>

int main()
{
    int x, flag = 0;
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &x);
    for(int c=2; c<=x/2; c++){
    if(x%c==0){
      flag = 1;
      break;
    }
    }
    if(flag==0)
        printf("%d eh um numero primo", x);
    else
        printf("%d nao eh um numero primo", x);
    return 0;
}