#include<iostream>
using namespace std;
  bool ishorted(int arr], int n,int i){
    if(i == n-1){
      return true;
    } else if(arr[i]>arr[i+1]){
      return false;
    }
    return ishorted(arr,n,i+1);
  }
int main(){
  int arr[]={1,2,3,4,5};
  int n = (sizeof(arr)/sizeof(arr[0]));
  cout<<" Ans : "<<ishorted(arr,n,0)<<endl;
  return 0;
}
