#include<stdio.h>

  int main(){

    int number[100];
    int revers[100];

    int i,j;

    for(i=0;i < 100;i++){
        number[i] = i + 1;
    }

    j=0;
    for(i = 99;i>=0;i--){
        revers[j] = number[i];
        j++;
    }

    printf("Array elements reversed from 100 to 1:\n");
    for(i=0;i<100;i++){
        printf("%d ",revers[i]);
    }

    printf("\n\n");

    return 0;
  }