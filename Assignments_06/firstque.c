#include<stdio.h>

  int main(){

    int n;
    int i;

    printf("Enter the size of list:");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid size\n");
    }

    int arr[n];

    printf("Enter %d elements of the list:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int greatest = arr[0];
    for(i=1;i<n;i++){
        if(arr[i] > greatest){
            greatest = arr[i];
        }
    }

    printf("the greatest element in the list is : %d\n",greatest);

    return 0;
  }