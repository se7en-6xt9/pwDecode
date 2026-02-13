#include<iostream>
using namespace std;
  void permutation(string s,string ans){
    if(s.length()==0){
      cout<<ans<<endl;
      return;     
    }
    permutation(s.substr(1),ans);
    char ch=s[0];
    permutation(s.substr(1),ans+ch);
  }
int main(){
  permutation("abc","");
  return 0;
}
