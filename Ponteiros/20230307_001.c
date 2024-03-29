#include <stdio.h>

void printVet(float* start, float* end){
    printf("%d ", *start);
    start++;
    if(start<end)
        printVet(start, end);
    else
    printf("\n");
}

int main()
{
    float vet1[10] = {1,2,3,4,5,6,7,8,9,10};
    float vet2[20] = {3,0.1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4};
    float vet3[3] = {3,3,3};
    printf("Vet1:\n");
    printVet(vet1, &vet1[1]);
    printVet(&vet1[3], &vet1[9]);
    printf("Vet2:\n");
    printVet(vet1, &vet1[3]);
    printVet(&vet1[14], &vet1[15]);
    printf("Vet3:\n");
    printVet(vet1, &vet1[1]);
    printVet(&vet1[2], &vet1[2]);
    return 0;
}
