#include<stdio.h>


 int main(){
    int n;
    int arr[n];
    int i,j,temp;

    printf("Enter a number of elements:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++){

        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array in a descending order:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n\n");

    return 0;
 }  




