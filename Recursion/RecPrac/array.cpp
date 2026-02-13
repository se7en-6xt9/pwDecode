#include<iostream>
using namespace std;
void arr1(int arr[],int n){
  if(n==0) return;
  for(int k=0; k<n; k++){
    cout<<arr[k]<<" ";
  }
  cout<<endl;
  arr1(arr+1,n-1);

}
int main(){
  int arr[]={1,23,4,5,67,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  arr1(arr,n);
  return 0;
}
