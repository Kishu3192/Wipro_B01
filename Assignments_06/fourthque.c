#include <stdio.h>

int main(){

    int n,sum ,i;

    printf("Enter the size of array:");
    scanf("%d",&n);

    if(n<1 || n>100){
        printf("Invalid input size should be between 1 to 100\n");
    }

    int arr[n];
    printf("Enter %d elements of the array:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i] < 1 || arr[i] > 1000){
            printf("Invalid array element.element should be between 1 and 1000\n");
        }
    }

    printf("Enter the sum:");
    scanf("%d",&sum);

     if(sum < 0 || sum > 100000){
        printf("invalid sum should be between 0 and 100000\n");
     }

    int current_sum = arr[0] ;
    int start = 0;

    for(i=1;i<=n;i++){
        while(current_sum > sum && start < i - 1){
            current_sum = current_sum - arr[start];
            start++;
        }

        if(current_sum == sum){
            printf("Sum found between %d and %d\n",start,i-1);
        }

        if(i < n)
           current_sum = current_sum + arr[i];
    }

    printf("No subarray found\n");
    return 0;
}