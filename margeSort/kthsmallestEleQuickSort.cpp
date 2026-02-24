#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
int pivtElement=arr[(si+ei)/2];
int count=0;
for(int i=si; i<=ei; i++){
  if(i==(si+ei)/2) continue;
  else if(arr[i]<pivtElement) count++;
}
int pivotIdx=si+count;
swap(pivtElement,arr[pivotIdx]);
int i=si;
int j=ei;
while(i<pivotIdx && j>pivotIdx){
  if(arr[i]<pivtElement) i++;
  if(arr[j]>pivtElement) j--;
  else if(arr[i]>pivtElement && arr[j]<pivtElement){
    swap(arr[i++],arr[j--]);
  }
}
return pivotIdx;
}
int quicSort(int arr[],int si,int ei,int k){
  //if(si>=ei) return;
  int pi=partition(arr,si,ei);
  if(pi+1==k) return arr[pi];
  else if(pi+1<k) return quicSort(arr,si,pi-1,k);
  else return quicSort(arr,pi+1,ei,k);
}
int main(){
    int k=3;
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicSort(arr,0,n-1,k);
    cout<<endl;
    return 0;
  }
