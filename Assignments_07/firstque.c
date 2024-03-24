#include<stdio.h>


void bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j = 0;j < n-i-1;j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int i;
    int arr[] = {10,1,3,5,2,8,9,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    printf("Before sorting:\n");
        for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    bubbleSort(arr,n);

    printf("\nAfter sorting in a descending order:\n");
    for(i = 0;i<n;i++){
        printf("%d->",arr[i]);
    }

    printf("\n\n");

    return 0;

}