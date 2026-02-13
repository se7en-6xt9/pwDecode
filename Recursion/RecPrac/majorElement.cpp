#include <iostream>
using namespace std;
  int majorElement(int arr[],int sz,int i){
    if(i>=sz){
      cout<<"Not found int\n";
      return 0;
    }
    int count = 0;
    for(int j=0; j<sz; j++){
      if(arr[i]==arr[j]){
        count++;
      }
    }
      if(count>sz/2){
        return i;
      }
      return majorElement(arr,sz,i+1);
    }
int main(){
  int arr[]={3,3,1,1,2,1,2,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Ans : "<<majorElement(arr,n,0)<<endl;
  return 0;
}

