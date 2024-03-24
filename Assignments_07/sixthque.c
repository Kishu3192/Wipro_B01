// Sum of Even and Odd position values in the array

#include<stdio.h>
   
   int main(){
    int n,i;
    int sum_even  = 0;
    int sum_odd = 0;

    printf("Enter the size of the array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
      if(i%2 == 0)
      {
        sum_even = sum_even + arr[i];
      }
      else
      {
        sum_odd = sum_odd + arr[i]; 
      }
   }

   printf("Sum of even Positioned elements: %d\n",sum_even );
   printf("sum of odd even Positioned elements:%d\n",sum_odd);

   return 0;

}  