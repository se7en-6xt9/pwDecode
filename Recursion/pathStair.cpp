#include <iostream>
using namespace std;
  int path(int n){
    if(n==1||n==2){
      return n;
    } 
    if(n==3){
      return 4;
    }
    return path(n-1)+path(n-2)+path(n-3);
  }
int main() {
  cout<<"Ans : "<<path(4)<<endl;
  return 0;
}

