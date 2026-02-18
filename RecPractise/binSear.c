#include<stdio.h>
void binarySearch(int arr[10], int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==key){
            printf("found [ %d ]",arr[mid]);
            return;
        } else if(key>arr[mid]){
            low=mid+1;
        } else{
            high=mid-1;
        }
    }
}
int main(){
    int arr[10],key,n;
    printf("  Enter Key -->  ");
    scanf("%d",&key);
    printf(" Enter size of n ->>  ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter arrya element no. [ %d ] --> ",i+1);
        scanf("%d",&arr[i]);
    }
    binarySearch(arr,n,key);
    return 0;
}