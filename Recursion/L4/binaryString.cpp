#include<iostream>
using namespace std;
void binaryStr(string str,int n){
  if(str.length()==n){
   for(int i=0; i<str.length(); i++){
     cout<<str[i];
   }
   cout<<endl;
   return;
  }
  binaryStr(str+'0',n);
  if(str[str.length()-1]!='1'){
    //cout<<str[str.length()-1]<<endl;
  binaryStr(str+'1',n);
  }
}
  int  main(){
    binaryStr("",4);
    //cout<<"Ans : "<<binaryStr("",3);
    return 0;
  }
