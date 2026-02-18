#include<iostream>
using namespace std;
void gcd(int a,int b){
  if(b==0) {
    cout<<a<<" ";
    return;
  }
  if(a==0){
    cout<<b<<" ";
    return;
  }
  if(a%b==0){
    cout<<b<<" ";
    return;
  }
  gcd(b,a%b);
}
  int main(){
    gcd(0,21);
    return 0;
  }
