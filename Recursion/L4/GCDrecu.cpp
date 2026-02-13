#include<iostream>
using namespace std;
  int GCD(int num1,int num2,int i){
    if(i==1) return 1;
    if(num1%i==0 && num2%i==0) return i;
    return GCD(num1,num2,i-1);
  }
  int main(){
    int a=24;
    int b=60;
  cout<<GCD(a,b,min(a,b))<<endl;
  return 0;
  }
