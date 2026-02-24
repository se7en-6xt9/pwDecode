#include<iostream>
#include<vector>
using namespace std;
int count(vector<int> &v,int ed,int st){
  int c=0;
  for(int i=st+1; i<ed; i++){
    if(v[st]>v[i]){
      c++;
    }
  }
  c=st+c;
  swap(v[c],v[st]);
  return c;
}
void quickSort(vector<int> &v,int ed,int st){
  if(ed<st) return;
int c = count(v,ed,st);
int i=0,j=ed-1;
while(i<c && j>c){
  if(v[i]>v[c] && v[j]<v[c]) {
    swap(v[i],v[i]);
  }
   if(v[i]<v[c]) i++;
   if (v[j]>v[c]) j--; 
}
quickSort(v,c,st);
quickSort(v,ed,c+1);
return;
}
int main(){
  vector<int> v={5,4,1,6,3,2};
  int n=v.size();
  quickSort(v,n,0);
  for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
