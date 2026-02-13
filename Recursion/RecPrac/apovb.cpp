#include <iostream>
using namespace std;
int power(int a,int b,int ans){
  if(b==0){
    return ans;
  }
  ans=ans*a;
  return power(a,b-1,ans);

}
int main() {
    cout<<power(2,5,1)<<endl;
    return 0;
}

