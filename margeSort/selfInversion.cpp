#include<iostream>
#include<vector>
using namespace std;
int count1=0;
int count3(vector<int> &v,int i,int j){
  if(i==v.size()) return count1;
  if(j==v.size()) return count3(v,i+1,i+2);

  if(v[i]>v[j] && i<j) {
    count1++; 
    cout<<v[i]<<" "<<v[j]<<endl;
  }
  return count3(v,i,j+1);
}
int main(){
  vector<int> v={5,1,8,2,3};
  cout<<count3(v,0,1)<<endl;
  return 0;
} 
