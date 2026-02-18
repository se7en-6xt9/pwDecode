#include<iostream>
#include<string>
using namespace std;
void permuatation(string ans,string orginal){
  if(orginal==""){
    cout<<ans<<endl;
    return;
  }
  for(int i=0; i<orginal.length(); i++){
    char ch = orginal[i];
    string left = orginal.substr(0,i);
    string right = orginal.substr(i+1);
    permuatation(ans+ch,left+right);
  }
}
int main(){
  string str = "123";
  permuatation("",str);
  return 0;
}
