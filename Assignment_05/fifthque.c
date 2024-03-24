#include<stdio.h>

 int main(){

    int n;
    int count = 0;
    int i = 1,j = 1,k = 1,l=1;
    printf("Enter the number:");
    scanf("%d",&n);
    

    for(i=1;i<n;i++){

      for(j = i;j<n;j++){

         for(k=j;k<n;k++){

            for(l=k;l<n;l++){

               if((i+j+k+l) == n)
               {
                  printf("%d+%d+%d+%d=%d\n",i,j,k,l,n);
                  count++;
               }
            }
         }
      }
    }
    printf("number of ways for division take place %d\n",count);

    return 0;
    
 }