#include<stdio.h>

 int main(){

    int n,digit;
    int sum = 0;
    int product = 1;

    printf("Enter a positive integer:");
    scanf("%d",&n);

    int temp = n;
    while(temp != 0){
        digit = temp % 10;
        if(digit != 0){
            sum = sum + digit;
            product = product * digit;
        }
        temp = temp /10;
    }

    printf("sum = %d\n",sum);
    printf("product = %d\n",product);

    return 0;
 }