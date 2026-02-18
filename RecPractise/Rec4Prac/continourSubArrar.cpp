#include<iostream>
using namespace std;
void subArray(vector<int> v,vector<int> ans,int i){
  if(i==v.size()){
    for(int j=0; j<ans.size(); j++){
      cout<<ans[j]<<" ";
    }
    cout<<endl;
    return;
  }
  subArray(v,ans,i+1);
  if(ans.size()==0 || ans[ans.size()-1]==v[i-1]){
    ans.push_back(v[i]);
    subArray(v,ans,i+1);
  }
}
  int main(){
    //vector<int> ans = {};
    vector<int> v = {1,2,3,4};
    subArray(v,{},0);
    return 0;
  }
