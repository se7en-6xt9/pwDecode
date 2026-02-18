#include<stdio.h>

void abc(int arr[10], int n, int key) {
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            count++;
        }
    }

    if(count > 0){
        printf("Found");
    } else {
        printf("Not Found");
    }
}

int main() {
    int n, key;
    int arr[10];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    abc(arr, n, key);

    return 0;
}