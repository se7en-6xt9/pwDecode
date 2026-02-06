#include<stdio.h>
void bubbleSort(int arr[10],int n){
    for(int j=0; j<n; j++){
        for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;  
        }
        }
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
    bubbleSort(arr,n);
    printArr(arr,n);
    return 0;
}
