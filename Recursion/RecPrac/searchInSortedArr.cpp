#include <iostream>
using namespace std;
  int search(int arr[],int si, int ei,int target){
    int mid = si+(ei-si)/2;
    if(target ==  arr[mid]){
      return mid;
    }
    if(ei<si){
      return -1;
    }
    if(target>=arr[si] && target<=arr[mid]){
     return search(arr,si,mid-1,target);   
    }else{
     return search(arr,mid+1,ei,target);
    }
  }
int main(){
  int arr[]={8,9,10,1,2,3,4,5,6,7};
  int ei = sizeof(arr)/sizeof(arr[0]);
  cout<<"Ans : "<<search(arr,0,ei,8);
  return 0;
}

