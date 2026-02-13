#include<iostream>
using namespace std;
void nDec(int n){
    if(n==0){
      return;
    } 
    cout<<n<<" \n";
    nDec(n-1);
  }
  int main(){
    nDec(5);
    return 0;
  }
