#include<iostream>
#include<vector>
using namespace std;
  void subSet(vector<int> ans,vector<int>& v,int i){
    if(i==v.size()){
      for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
      } 
      cout<<endl;
        return;
    }
    subSet(ans,v,i+1);
    ans.push_back(v[i]);
    subSet(ans,v,i+1);
  }
  int main(){
  vector<int> v = {1,2,3,4};
  vector<int> ans;
  subSet(ans,v,0);
  return 0;
  }
