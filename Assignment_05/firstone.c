#include<stdio.h>

  int main(){
      
      int n;
      int i,j;
      int value = 1;



      printf("Enter the value :");
      scanf("%d",&n);

      if(n<2 || n>10){
        printf("invalid input n should be btn 2 t0 10\n");
      }
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",value++);
            if(j!=n-1)
              printf("*");
        }
        printf("\n\n");
      }
    return 0;  
  }