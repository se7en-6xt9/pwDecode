#include<iostream>
using namespace std;
  int rec(int n){
  if( n == 1){
    return 1;
  }
  return n*rec( n-1);
  }
  int main(){
    cout<<" Fact of 5 : "<<rec(5)<<endl;
    return 0;
  }
