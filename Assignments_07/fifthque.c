#include<stdio.h>

  int main(){
    int arr[100],n,i;
    int sum_Even = 0;
    int sum_Odd = 0;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0;i<n;i++){
        if(arr[i] % 2 == 0){
            sum_Even = sum_Even + arr[i];
        }else{
            sum_Odd = sum_Odd + arr[i];
        }
    }

    printf("Sum of Even numbers is:%d\n",sum_Even);
    printf("Sum of Odd numbers is:%d\n",sum_Odd);
  }