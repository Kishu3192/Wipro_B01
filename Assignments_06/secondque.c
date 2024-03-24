#include<stdio.h>

   int main(){

    int i,n;
    int arr[100];
    

    printf("Enter how many elements you want in a array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int smallest = arr[0];
    for(i=1;i<n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("the smallest number in the array is:%d\n",smallest);

    return 0;
   }