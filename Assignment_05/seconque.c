#include<stdio.h>

int main(){
    int n;
    int i,j;
    int num = 1;

    printf("Enter the value:");
    scanf("%d",&n);

    if(n<2 || n>10){
        printf("invalid input value should be btn 2 to 10\n");
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d",num++);
            if(j != 1)
              printf("*");
        }
        
        printf("\n\n");
    }
    return 0;
}