#include <iostream>
using namespace std;
  int pow(int a,int b){
    if(b==1){
      return a;
    }
    if(b%2==0){
    int ans=pow(a,b/2);
    } else{
    ans=pow(a,b/2)*a;
    }
    return ans*ans;
  }
int main() {
    cout<<"Ans : "<<pow(2,4)<<endl; 
    return 0;
}

