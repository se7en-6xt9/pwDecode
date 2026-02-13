#include<iostream>
using namespace std;
  void incSubStr(vector<int> &v,int i,int j,int k){
    if(i==v.size()-3){
      cout<<v[i]<<v[i+1]<<v[i+2]<<endl;
      return;
    }
     cout<<v[i]<<v[j]<<v[k]<<endl;
    if(j==v.size()-2 ){ incSubStr(v,i+1,i+2,i+3);
    return;
    }
    if(k==v.size()-1) {incSubStr(v,i,j+1,j+2);
    return;
    }
    incSubStr(v,i,j,k+1);
    return;
  }
int main(){
  vector<int> v={1,2,3,4,5};
  incSubStr(v,0,1,2);
  return 0;
}
