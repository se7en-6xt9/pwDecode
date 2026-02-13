#include<iostream>
#include<vector>
using namespace std;
void subArr(vector<int> &v,int i,int j){
  if(i==v.size()-1) {
    cout<<v[i]<<endl;
    return;
  }
  for(int k=i; k<=j; k++){
    cout<<v[k]<<" ";
  }
  cout<<endl;
  if(j==v.size()-1){
    subArr(v,i+1,i+1);
      return;
  }
  subArr(v,i,j+1);
  return;
}
  int main(){
  vector<int> v ={1,2,3,4};
  subArr(v,0,0);
  return 0;
  }
