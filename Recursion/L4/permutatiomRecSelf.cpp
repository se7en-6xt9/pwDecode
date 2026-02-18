#include<iostream>
#include<string>
using namespace std;
string permutation(string s,string ans,int i){
  if(s=="") return ans;
    ans.push_back(s[i]);
    int j=0; int k=0;
    string temps = "";
    while(j<s.length()){
      if(s[i]==s[j++]){
        continue;
      }
      else{
        temps[k++]=s[j++];
      }
    }
   return permutation(temps,ans,i);
}
int main(){
  cout<<permutation("123","",0)<<endl;
  return 0;
}
