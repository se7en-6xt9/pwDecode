#include<iostream>
using namespace std;
  void numInInc(int n){
    if(n==0){
      return;
    } 
    numInInc(n-1);
    cout<<n<<endl;
  }
  int main(){
  numInInc(5);
  return 0;
  }
