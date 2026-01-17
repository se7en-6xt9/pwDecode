#include <iostream>
#include <string>
//#include <vector>
using namespace std;
  string removeDup(string s,string ans,int i){
    int count=0;
    if(i>s.length()){
      return ans;
    }
    for(int j=0; j<ans.length(); j++){
      if(s[i]==ans[j]){
        count++;
      }
    }
    if(count==0){
      ans.push_back(s[i]);
    }
    return removeDup(s,ans,i+1);
  }
int main() {
  string s = {"aabbccdefff"};
  cout<<"Ans : "<<removeDup(s," ",0);
  return 0;
}

