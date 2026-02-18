#include<stdio.h>
    int fibo(int n){
        if(n==0 || n==1){
            return n;
        } else {
            return fibo(n-1)+fibo(n-2);
        }
    }
    int main(){
        for(int i=0; i<10; i++){
    printf("[ %d ]",fibo(i));
        }
    return 0;    
    }
