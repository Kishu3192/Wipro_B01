#include<stdio.h>
#include<stdbool.h>

    bool isPrime(int n){
        int i = 5;
       if(n<=1)
          return false;
        if(n<=3)
          return true;
        if( n % 2 ==0 || n % 3 == 0)
           return false;
        for(i=5;i*i<=n;i+=6){
            if(n%i == 0 || (i + 2) == 0)
              return false;
        }
        return true;     
    }

    void sumofTwoPrimes(int n){
        int count = 0;
        int i = 2;
        printf("%d=",n);

        for(i=2;i<=n/2;i++){
            if(isPrime(i) && isPrime(n-i)){
                printf("%d + %d",i,n-i);
                count++;
                if(count < 4)
                    printf("\n\n");
            }
        }
        printf("\n NoofWays = %d\n",count);
    }


    int main(){
    int num;
    int i;
    printf("Enter a positive integer:");
    scanf("%d",&num);

    sumofTwoPrimes(num);

    return 0;


   }