#include<iostream>
#include<vector>
using namespace std;
sub(int arr[],int arr1[],int arr2[],int n,vector<int>v,int idx){
  if(idx==n){
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
  }
  sub(arr,arr1,arrr2,n,v,idx+1);
  v.push_back(arr[]);
  sub(arr,arr1,arrr2,n,v+idx+1);
int main(){
  int arr1[3]={10,15,25};
  int arr2[4]={1,5,20,30};
  int n=3;
  int m=4;
  }
  int arr[n+m]={10,15,25,1,5,20,30};
  //sub(arr,arr1,arrr2,n+m,v,0);
 sub(arr,arr1,arr2,x,v,0,m,n);
}
