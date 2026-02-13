#include <iostream>
using namespace std;
  int binarySearch(int arr[],int key, int i,int n){
    //int n = sizeof(arr)/sizeof(arr[0]);
    if(arr[i]==key){
      return i;
    } else if(i>=n){
    return -1;
    }
    return binarySearch(arr,key,i+1,n);
  }
int main() {
  int arr[]={1,2,3,4,5,6,7,8,9,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Ans : "<<binarySearch(arr,22,0,n)<<endl;
  return 0;
}

