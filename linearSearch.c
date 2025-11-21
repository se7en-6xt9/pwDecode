#include<stdio.h>
void abc(int arr[10], int n, int key){
    int count=0;
        for(int i=0; i<n; i++){
                if(arr[i]==key){
                    count++;
                }
        }
        if(count>0){
                printf("Found ");
        }
}
    int main(){
        int n,key;
        int arr[10];
        printf("\n");
        printf("     Enter key    --->> ");
        scanf("%d",&key);
        printf("\n");
        printf("Enter n");
        scanf("%d",&n);
        for(int i=0; i<n; i++){
                scanf("%d",&arr[i]);
        }
     abc(arr,n,key);   

    }