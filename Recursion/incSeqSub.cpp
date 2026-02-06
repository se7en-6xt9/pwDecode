//printSubSEQin AScediing order of lenght k

#include<iostream>
using namespace std;
  void subStr(int arr[],vector<int> v,int k,int n){
    if(k==n){
      if(v.size()==3){
      for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
      }
      printf("\n");
      }
      return;
    }
    subStr(arr,v,k+1,n);
    v.push_back(arr[k]);
    subStr(arr,v,k+1,n);
  }
int main(){
  vector<int> v;
  int arr[]={1,2,3,4,5};
  subStr(arr,v,0,5);
}
