#include <iostream>
using namespace std;
  int search(int arr[],int si,int ei, int target){
    int mid = si+(ei-si)/2;
    if(ei<si){
      return -1;
    }
    if(arr[mid]==target){
      return mid;
    }
    if(arr[si]<=arr[mid]){
      if(arr[si]<=target && target<=arr[mid]){
        return search(arr,si,mid-1,target);
      } else {
        return search(arr,mid+1,ei,target);
      }
    } else{
      if(arr[mid]<= target && target<=arr[ei]){
        return search(arr,mid+1,ei,target);
      }else{
        return search(arr,si,mid-1,target);
      }
    }
  }
int main() {
  int arr[]={6,7,8,9,1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Ans : "<<search(arr,0,n-1,23);
  return 0;
}

