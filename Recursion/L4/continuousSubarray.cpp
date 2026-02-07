

#include<iostream>
using namespace std;
  void sub(vector<int> v,vector<int> ans,int i){
    if(i==v.size()){
      for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
      return;
    }
    sub(v,ans,i+1);
    if(ans.size()==0 || ans[ans.size()-1]==v[i-1]){
    ans.push_back(v[i]);
    sub(v,ans,i+1);
    }
  }
int   main(){
  vector<int> v={1,1,2,3,4};
  vector<int> ans;
  sub(v,ans,0);
  return 0;
}
