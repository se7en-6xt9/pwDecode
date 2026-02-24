#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &v1,vector<int> &v2,vector<int> &v){
  int i=0,j=0,k=0;
  while(i<v1.size() && j<v2.size()){
    if(v1[i]>v2[j]) v[k++]=v1[i++];
    else v[k++]=v2[j++];
  }
  while(i<v1.size()) v[k++]=v1[i++];
  while(j<v2.size()) v[k++]=v2[j++];
  return;
}
void mergeSort(vector<int> &v){
  int n=v.size();
  if(n==1) return;
  int n1=n/2;
  int n2=n-n1;
  vector<int> v1(n1),v2(n2);
  for(int i=0; i<n1; i++) v1[i]=v[i];
  for(int j=0; j<n2; j++) v2[j]=v[n1+j];
  mergeSort(v1);
  mergeSort(v2);
  merge(v1,v2,v);
}
int main(){
  //vector<int> v={5,2,4,2,5,7,54,3,2,34,5,67,6,544,3,22};
  vector<int> v={1,2,3,4,5,6,67,7};
  mergeSort(v);
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  return 0;
}


