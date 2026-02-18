#include<iostream>
#include<vector>
#include<string>
using namespace std;
int sza,szb;
  void merge(int a[],int b[],int res[]){
    int i=0,j=0,k=0;
    while(i<sza && j<szb){
      if(a[i]<b[j]){
        res[k++]=a[i++];
      } else{
        res[k++]=b[j++];
      }
    }
    while(i<sza){
      res[k++]=a[i++];
    }
    while(j<szb){
      res[k++]=b[j++];
    }
    for(int p=0; p<sza+szb; p++){
        cout<<res[p]<<" ";
    }
    cout<<endl;
    return;
  }
  int main(){
    int a[]={1,5,8,10,30};
    int b[]={3,6,8,30,60};
    sza=sizeof(a)/sizeof(a[0]);
    szb=sizeof(b)/sizeof(b[0]);
    int sz=sizeof(a)/sizeof(a[0])+sizeof(b)/sizeof(b[0]);
    int res[sz];
    merge(a,b,res);
    return 0;
  }
