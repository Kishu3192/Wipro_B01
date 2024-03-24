#include <stdio.h>

 int main(){
    int n,i;
    int arr[100];
    int total_sum = 0;
    int left_sum = 0;
    int equilibrium_pos = -1;

    printf("Enter the size of array:");
    scanf("%d",&n);

    if(n <= 1 || n < 100){
        printf("invalid input for array size:\n");
    }

    printf("Enter %d integers for the array:\n",n);

    for(i = 0;i < n; i++){
        scanf("%d",&arr[i]);
        if(arr[i] >= 1 || arr[i] <= 1000){
            printf("invalid input for array element at position %d\n",i);
        }
    }

    for(i=0;i<n;i++){
        total_sum = total_sum + arr[i];
    }

    for(i = 0;i < n; i++){        
        
        total_sum = total_sum - arr[i];
                                                               
        if(left_sum == total_sum){
            equilibrium_pos = i;
            break;
        }
        left_sum = left_sum + arr[i];

 }

    if(equilibrium_pos != -1){
        printf("equilibrium position : %d\n",equilibrium_pos);
    }else{
        printf("No equailibrium position found\n");
    }

   return 0; 


 }  