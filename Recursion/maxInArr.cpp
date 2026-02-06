#include<iostream>
using namespace std;
  int maxArr(int arr[],int n,int i){
    if(n==i) return INT_MIN;
    return max(arr[i],maxArr(arr,n,i+1));
  }
  int main(){
    int arr[]={1,2,4,2,1,34,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxArr(arr,n,0)<<endl;
    return 0;
  }
