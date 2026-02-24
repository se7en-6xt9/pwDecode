#include<iostream>
using namespace std;
int count2=0;
void merge(vector<int> &v1,vector<int> &v2,vector<int> &v){
int i=0,j=0,k=0;
while(i<v1.size() && j<v2.size()){
  if(v1[i]>2*v2[j]) {
    count2=count2+(v1.size()-i);
    j++;
  } else{
    i++;
  }
}
  i=0,k=0;
  while(i<v1.size() && j<v2.size()) {
    if(v1[i]<v2[j]) v[k++]=v1[i++];
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
  vector<int> v = {5,1,2,4,1,4,2,1,3,4,2};
  mergeSort(v);
  cout<<count2<<"<- count \n";
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  return 0;
  }
