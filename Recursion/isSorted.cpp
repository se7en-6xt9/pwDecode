#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isSorted(int arr[],int i,int n){
  if(i<n){
  if(arr[i]<arr[i+1]){
 // continue;
  }else {
   return false;
  }
  } else {
    return true;
  }
  return isSorted(arr,i+1,n);
    
}
int main() {
  int arr[]={1,122,3,4,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<" Ans : "<<isSorted(arr,0,n)<<endl;
  return 0;
}

