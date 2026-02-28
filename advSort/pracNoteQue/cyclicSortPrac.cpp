#include<iostream>
#include<vector>
using namespace std;
void cyclicSort(vector<int> &v){
  int i=0;
  while(i<v.size()){
    int correctIdx=v[i]-1;
    if(i==correctIdx) i++;
    else swap(v[i],v[correctIdx]);
  }
  return;
}
 int main(){
   vector<int> v={4,3,5,2,6,1,7,8};
   cyclicSort(v);
   for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" ";
   }
   return 0;
 }
