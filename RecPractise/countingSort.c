#include<stdio.h>
void countingSort(int arr[10]){
    int freq[20]={0};
    for(int i=0; i<10; i++){
        freq[arr[i]]++;
    }
    int count=0;
    for(int i=0; i<20; i++){
        while(freq[i]>0){
            arr[count]=i;
            count++;
            freq[i]--;
        }
    }
        for(int i=0; i<10; i++){
            printf("[ %d ] ",arr[i]);
        }
    }

    int main(){
        int arr[10]={4,5,2,5,6,7,5,4,3,1};
        countingSort(arr);
        return 0;
        }
