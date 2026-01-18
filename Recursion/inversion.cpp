#include <iostream>
using namespace std;
  int inversion(int arr[],int count, int n,int i){
    if(i>n-1){
      return count;
    }
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j] && i<j){
        count++;
      }
    }
    return inversion(arr,count,n,i+1);
  }
int main() {
  int arr[]={3,4,6,2,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Ans : "<<inversion(arr,0,n,0);
  return 0;
}

