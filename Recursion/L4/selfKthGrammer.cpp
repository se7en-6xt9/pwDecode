#include<iostream>
using namespace std;
void countAnsSay(vector<int> v,vector<int> ans,int n,int j){
  if(n==j){
    for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
    }
    return;
  }
  int i=0;
  int count =1;
  while(i<v.size()-1){
    if(v[i]==v[i+1]){
      count++;
      i++;
    }
    else{
      ans.push_back(count);
      ans.push_back(v[i]);
      count=1;
      i++;
    }
  }
ans.push_back(count);
ans.push_back(v[i]);
countAnsSay(ans,{},n,j+1);
}



  int main(){
    vector<int> v={1};
    vector<int> ans = {};
    countAnsSay(v,ans,5,1);
    return 0;
  }
