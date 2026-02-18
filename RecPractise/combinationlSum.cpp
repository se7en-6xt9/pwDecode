#include<iostream>
using namespace std;
int n;
  void combSum(vector<int> v,vector<int> ans,int i,int target){
    if(target==0){
      for(int k=0; k<ans.size(); k++){
        cout<<ans[k];
      }
      cout<<endl;
      return;
    }
    if(target<0 || i>v.size()) return;
    ans.push_back(v[i]);
    combSum(v,ans,i,target-v[i]);
    i++;
    ans.push_back(v[i]);
    combSum(v,ans,i,target-v[i]);
  
  }
  int main(){
  combSum({1,2,3},{},0,8);
    return 0;
  }
