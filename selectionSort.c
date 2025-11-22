#include<stdio.h>
void selectionSort(int arr[10], int n){
    for(int i=0; i<n; i++){
        int smallestIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[smallestIdx]>arr[j]){
                smallestIdx=j;
            }
            //printf("%d",smallestIdx);
        
                }
            int temp=arr[i];
            arr[i]=arr[smallestIdx];
            arr[smallestIdx]=temp;

    }
}
void printArr(int arr[10], int n){
            for(int i=0; i<n; i++){
                printf(" %d  ",arr[i]);
                printf("\n");
            }
}
 int main(){
    int arr[10],n;
    //printf("  Enter Key -->  ");
   // scanf("%d",&key);
    printf(" Enter size of n ->>  ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter arrya element no. [ %d ] --> ",i+1);
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printArr(arr,n);
    return 0;
}
