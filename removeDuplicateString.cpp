#include<iostream>
using namespace std;
  string dupStr(string s, int i,string ans,int freq[150]){
    int num = int(s[i]);
    if(freq[num] == 0){
    ans.push_back(s[i]);
    freq[num]++;
    }
    else if( i >= s.length()){
      return ans;
    }
    return dupStr(s,i+1,ans,freq);
  }
int main(){
  int freq[150]={0};
  cout<<"Ans : "<<dupStr("aabbccdee",0,"",freq)<<endl;
  return 0;
}
