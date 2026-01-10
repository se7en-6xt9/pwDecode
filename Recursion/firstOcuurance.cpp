#include<iostream>
//#include<string>
#include<vector>
using namespace std;
  int  ans(vector<int> v,int target, int i){
    if(i == v.size()){
      return -1;
    } else if(v[i]==target){
      return i;
    }
   return ans(v,target,i+1);
  }
int main(){
  vector<int> v = {1,2,4,3,4,5,3,4,};
  cout<<" Ans :"<<ans(v,0,0);
  return 0;
}
