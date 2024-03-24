#include<stdio.h>

  void rotateKth(int arr[],int n,int k){
    int i;
    for(i=0;i<n;i=i+k){
        int left = i;
        int right = (i + k - 1 < n) ? i + k - 1 : n - 1;

        int temp;
        while(left < right){
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
  }

  int main(){
    int n;
    int arr[n];
    int i;
    printf("No of elements int the list:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<3;i++){
      int k;  
      printf("Enter the value for k:\n");
      scanf("%d",&k);

      rotateKth(arr,n,k);

      printf("output after rotating every %dth element :\n",k);
      int j;
      for(j=0;j<n;j++){
         printf("%d",arr[j]);
      }  

      printf("\n\n");
  }
   return 0;
}
