#include <iostream>
using namespace std;
  void printToN(int n){
    if(n<=0){
      return;
    }
    printToN(n-1);
    cout<<n<<endl;
  }
int main() {  
    printToN(5);
    return 0;
}

