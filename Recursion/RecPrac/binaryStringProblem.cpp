#include<iostream>
#include<string>
using namespace std;
  void binaryProblem(int n,int last,string ans){
    if(n==0){
      cout<<"Ans : "<<ans<<endl;
      return;
    }
    if(last!=1){
      binaryProblem(n-1,0,ans+'0');
      binaryProblem(n-1,1,ans+'1');
    } else {
      binaryProblem(n-1,0,ans+'0');
    }
  }
int main(){
  binaryProblem(5,0,"");
  return 0;
}
