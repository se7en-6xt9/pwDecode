#include <iostream>
using namespace std;
void occurance(int arr[],int n,int i,int key){
  if(i>=n){
    return;
  } else if(arr[i]==key){
    cout<<" "<<i<<" \n";
  }
  return occurance(arr,n,i+1,key);
}
int main() {
  int arr[]={1,2,3,4,5,2,4,6,2,2,3,4,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  occurance(arr,n,0,2);
  return 0;
}

