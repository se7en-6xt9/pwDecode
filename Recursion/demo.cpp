#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> v = {"abcabca"};
  int j=0;
  while(j<v.size()){
  for(int i=j; i<v.size(); i++){
    if(v[0][j]==v[0][i]){
      for(int p=j; p<=i; p++){
        cout<<v[0][p]<<" \n";
      }
    }
  }
  j++;
  }
  return 0;
}

