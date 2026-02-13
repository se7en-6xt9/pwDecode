#include <iostream>
using namespace std;
  void print(int n,int i){
  if(i<0){
    return;
  }
  cout<<(n-i--)<<endl;
  print(n,i);
  }
int main() {
    print(5,4);
    return 0;
}

