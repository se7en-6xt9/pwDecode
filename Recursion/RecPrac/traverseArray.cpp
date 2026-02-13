#include<iostream>
using namespace std;
void remove(int arr[],int n,vector<int> &v,int i){
  if(i==n) {
    for(int i=0; i<v.size(); i++){
      cout<<v[i]<<endl;
    }
    return;
  }
  if(arr[i]!=1) v.push_back(arr[i]);
  remove(arr,n,v,i+1);
  } 
  int main(){ 
    int arr[]={1,2,4,3,1,2,3,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
  remove(arr,n,v,0);
  return 0;
  }
