#include<stdio.h>
   int main(){
    int n;
    int i,j;

    printf("Enter the value:");
    scanf("%d",&n);

    if(n<2 || n>26){
        printf("invalid input value should be btn 2 to 26\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }

        for(j=1;j<=i;j++){
            printf("%c",'A' + j-1);
        }

        for(j=i-1;j>=1;j--){
            printf("%c",'A' + j-1);
        }
        printf("\n");

    }
    return 0;  
   }