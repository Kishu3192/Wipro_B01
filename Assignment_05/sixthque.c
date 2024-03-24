#include<stdio.h>
    
    int main(){
        int n,digit,position=1;
        int evenproduct = 1;
        int oddproduct = 1;

        printf("Enter a number:");
        scanf("%d",&n);

        while(n != 0){
            digit = n % 10;

            if(position%2 == 0){
                evenproduct *= digit;
            }else{
                oddproduct *= digit;
            }

            n /= 10;
            position++;
        }

        if(evenproduct == oddproduct){
            printf("Yes\n");
        }else{
            printf("No\n");
        }

        return 0;
    }