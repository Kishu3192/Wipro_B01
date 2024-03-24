#include<stdio.h>

 int main(){
    int i;
    int number[100];

    for(i=0;i<100;i++){
        number[i] = i + 1;
    }

    printf("Array elements from 1 to 100:\n");
    for(i = 0;i < 100;i++){
        printf("%d ",number[i]);
    }

    printf("\n\n");

    return 0;
 }