#include<iostream>
using namespace std;
  void subSet(int arr[],int n,int i){
    if(n==1) {
      cout<<"["<<arr[0]<<"] \n";
      cout<<"["<<" "<<"]"<<endl;
      return;
    }
    if(i==n) {
      subSet(arr+1,n-1,0);
      return;
    }
    for(int k=0; k<=i; k++){
      cout<<"["<<arr[k]<<"] ";
    }
    cout<<endl;
    subSet(arr,n,i+1);
      }
  int main(){
    int arr[]={1,2,3};
    int n=3;
    subSet(arr,n,0);
  return 0;
  }
