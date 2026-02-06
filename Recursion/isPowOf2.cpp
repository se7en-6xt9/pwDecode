#include <iostream>
using namespace std;
bool pow(int n){
  if(n==0){
    return true;
  } else if(n<=1){
    return false;
  }
  return pow(n%2);
}
int main() {
    cout<<"Ans : "<<pow(6)<<endl;
    return 0;
}

