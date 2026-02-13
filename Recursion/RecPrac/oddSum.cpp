#include <iostream>
using namespace std;
int oddSum(int a,int b,int ans){
  if(a>=b){
    return ans;
  }
  if(a%2==0){
  return oddSum(a+1,b,ans);
  }
  ans = a + ans;
  return oddSum(a+2,b,ans);
  
}
int main() {
    cout<<"Ans : "<<oddSum(1,10,0)<<endl;
    return 0; 
}

