#include<stdio.h>

   int main(){

    int n1,n2;
    int i;
    int count1[10];
    int count2[10];
    int sum1,sum2 = 0;

    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);


    while(n1 != 0){
        int digit = n1 %10;
        count1[digit]++;
        n1 = n1 /10;
    }
    while(n2 != 0){
        int digit = n2 %10;
        count2[digit]++;
        n1 = n2 /10;
    }

    for(i=0;i<10;i++){
        if(count1 [i] > 0){
            sum1 = sum1 + i;
        }
        if(count2[i] > 0){
            sum2 = sum2 + i;
        }
    }
    if(sum1==sum2){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

   return 0; 
    }

     