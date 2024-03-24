#include<stdio.h>

    int main(){
        int n;
        int position = 1;
        int evenproduct = 1,oddsum = 0;

        printf("Enter a number:");
        scanf("%d",&n);

        while(n != 0){
            int digit = n % 10;

            if(position % 2 == 0){
                evenproduct = evenproduct * digit;
            }else{
                oddsum = oddsum * digit;
            }
            n = n/10;
            position++;
        }

        if(oddsum == 0){
            printf("FALSE \n");
        }else if(evenproduct % oddsum == 0){
            printf("TRUE\n");
        }else{
            printf("FALSE\n");
        }
        return 0;
    }