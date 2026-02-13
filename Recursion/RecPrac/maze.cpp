#include<iostream>
#include<string>
using namespace std;
int maze(int a, int b){
  if(a == 1 || b == 1){
    return 1;
  }
  return maze(a-1,b)+maze(a,b-1);
}
void path(int a,int b,string s){
  if(a == 1 || b==1){
    cout<<"Ans : "<<s<<endl;
    return;
  }
  path(a-1,b,s+'d');
  path(a,b-1,s+'r');
}
int main() {
  //cout<<"Ans : "<<maze(3,4)<<endl;
  path(3,4,"");
  return 0;
}

