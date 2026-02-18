#include<iostream> //dry run this
using namespace std;
int gcd(int a,int b,int i){
  if(i<2) return 1;
  if(a%i==0 && b%i==0){
    return i;
  }
  return gcd(a,b,i-1);
}
  int main(){

    int a=24;
    int b=60;
    int i=min(a,b);
    cout<<gcd(a,b,i)<<" ";
    return 0;
  }
