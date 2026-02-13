#include <iostream>
#include <string>
#include <vector>
using namespace std;
  string xToLast(string s,string ans,char target,int i,int count){
    if(i>s.length()){
      for(int i=0; i<count; i++){
        ans.push_back('x');
      }
      return ans;
    }
    if(s[i]==target){
      count++;
    } else{
      ans.push_back(s[i]);
    }
    return xToLast(s,ans,target,i+1,count);
  }
int main() {
  string s = {"axbcxxdexx"};
  cout<<"Ans : "<<xToLast(s,"",'x',0,0);
  return 0;
}

