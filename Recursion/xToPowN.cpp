#include<iostream>
using namespace std;
  int power(int base, int pow){
    if(pow == 0){
      return 1;
    }
    return base*power(base,pow-1);
  }
int main(){
  cout<<"Ans : "<<power(2,0)<<endl;
  return 0;
}
