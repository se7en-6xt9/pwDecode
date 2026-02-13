#include <iostream>
//#include <string>
//#include <vector>
using namespace std;
int partition(int arrr[],int si,int ei){
  int i = si-1;
  int pivot = arr[ei];
  for(int j=si; j<ei; j++){
    if(arr[i]<=pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  i++;
  swap(arr[i],arr[ei]);
  return i
}
  void quickSort(int arr[], int si, int ei){
  if(si>=ei){
    return;
  }
int pivotIdx = partition(arr,si,ei);
quickSort(arr,si,pivotIdx-1);
quickSort(arr,pivotIdx,ei);
}
void printArr(int arr[],int si, int ei){
  for(int i=si; i<ei; i++){
    cout<<" "arr[i]<<endl;
  }
}
int main() {
  int arr[]={1,4,7,3,0,8,2};
  int n  = 7;
  quickSort(arr,0,n-1);
  printArr(arr,0,n);
  return 0;
}

