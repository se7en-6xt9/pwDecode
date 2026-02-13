#include<iostream>
using namespace std;
void corrPra(string s,int b,int e,int n){
  if(e==n) {
    for(int i=0; i<s.length(); i++){
      cout<<s[i];
    }
    cout<<endl;
    return;
  }
  if(b<n){
 corrPra(s+'(',b+1,e,n);
  }
 if(b>e){
 corrPra(s+')',b,e+1,n);
}
}
  int main(){
    corrPra("",0,0,3);
    return 0;
  }
