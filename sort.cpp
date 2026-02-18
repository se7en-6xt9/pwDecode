#include<iostream>
#include<string>
using namespace std;
int main(){
  vector<int> v={1,5,1,5,13,4,1};
  int arr[]={5,4,3,2,1,2,1,2};
  sort(v,v+4);
  for(int i=0; i<6; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
