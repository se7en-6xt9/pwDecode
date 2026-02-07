#include<iostream>
using namespace std;
string isPalindrom(string s,int idx){
  if(idx>=s.length()-1-idx) return "Yes palindrom";
  if(s[idx]!=s[s.length()-idx-1]) return "No";
  return isPalindrom(s,idx+1);
}
  int main(){
  cout<<isPalindrom("abcba",0)<<" "<<endl;
  return 0;
  }
