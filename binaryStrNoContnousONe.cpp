#include<iostream>
#include<string>
using namespace std;
int n;
void binaryStr(string ans,int i){
  if(i==n){
    //for(int k=0; k<ans.length(); k++){
      cout<<ans;
    //}
    cout<<endl;
    return;
  }
  binaryStr(ans+'0',i+1);
  if(ans.empty() || ans[ans.size()-1]!='1'){
  binaryStr(ans+'1',i+1);
  }
}
  int main(){
    n=3;
    string s="";
    binaryStr(s,0);
    return 0;
  }
