#include<iostream>
using namespace std;
  int rev(int n,int ans){
    if(n==0) return ans;
    ans = ans*10+n%10;
    return rev(n/10,ans);

  }
int main(){
  cout<<"Ans : "<<rev(4561,0);
  return 0;
}
