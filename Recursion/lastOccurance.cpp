#include<iostream>
using namespace std;
  int lastOcc(vector<int> v,int target, int i){
    static int ans = -1;
    if(v.size()==i){
      return ans;
    } else if(v[i]==target){
       ans = i;
    }
    return lastOcc(v,target,i+1);
  }
int main(){
  vector<int> v = {1,2,3,45,5,2,34,2,134};
  cout<<" Ans : "<<lastOcc(v,2,0);
  return 0;
}
  
