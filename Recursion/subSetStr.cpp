#include<iostream>
#include<string>
using namespace std;
void subStr1(string ans,string orignal){
  if(orignal == "") {
    cout<<ans<<endl;
    return;
  }
  char ch = orignal[0];
  subStr1(ans+ch,orignal.substr(1));
  subStr1(ans,orignal.substr(1));
}
  int main(){
  subStr1("","abc");
  return 0;
  }
