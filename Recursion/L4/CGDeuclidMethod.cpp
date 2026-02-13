#include<iostream>
using namespace std;
  int gcd(int num1,int num2){
    int rem = max(num1,num2)%min(num1,num2);
    //quo = max(num1,num2)/min(num1,num2);
    if(rem ==0 ) return min(num1,num2);
    return gcd(rem,min(num1,num2));
  }
  int main(){
    cout<<gcd(24,60)<<endl;
    return 0;
  }
