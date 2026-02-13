#include <iostream>
#include <string>
//#include <vector>
using namespace std;
  string strRev(string str,string ans, int n){
  if(n<0){
  return ans;
  }
  ans.push_back(str[n]);
  return strRev(str,ans,n-1);
  }
int main() {
  string str = {"abcdef"};
  int n = str.length();
  cout<<"Ans  : "<<strRev(str,"",n)<<endl;
  return 0;
}

