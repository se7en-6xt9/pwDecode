#include<iostream>
#include<string>
using namespace std;
  int main(){
    int arr[]={5,4,2,3,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
      int correctIdx=arr[i]-1;
      if(i==correctIdx) i++;
      else{
        swap(arr[i],arr[correctIdx]);
      }
    }
    for( i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
    return 0;
  }
