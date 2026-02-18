#include<iostream>
#include<string>
using namespace std;
string palindrom(string s,int i){
  if((s.length()-1-i)<i) return "Yes palindrom";
  if(s[s.length()-1-i]!=s[i]) return "Not palindrom";
  return palindrom(s,i+1);
}
  int main(){
    cout<<palindrom("aba",0)<<" ";
    return 0;
  }
