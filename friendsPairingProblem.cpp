#include<iostream>
using namespace std;
  int PairngProblem(int n){
    if(n==1 || n==2){
      return n;
    }
    int ans1 = PairngProblem(n-1);
    int ans2 = (n-1)*PairngProblem(n-2);
      return ans1+ans2;
  }
int main(){
  cout<<"Ways are : "<<PairngProblem(5)<<endl;
  return 0;
}
