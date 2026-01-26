#include <iostream>
//#include <string>
#include <vector>
using namespace std;
  int countAnsSay(int n,vector<int> &arr,vector<int> &arr1,int z){
    if(n==1){
      arr[0]=1;
      cout<<arr[0]<<endl;
      return arr[0];
    }
    countAnsSay(n-1,arr,arr1,z+1);
    int i=0,p=0;
    int count = 1;
    while(arr[i]!=0){
      if(arr[i]==arr[i+1]){
        count++;
        i++;
      } 
      else{
        arr1[p++]=count;
        arr1[p++]=arr[i++];
        count = 1;
      }

    }  
    if(arr[i]==0){
      for(int i=0; i<=p; i++){
        cout<<arr1[i];
      }
      cout<<"\n";
      return arr[0];
    //countAnsSay(n-1,arr,arr1,z+1);

   // return;

  }
  
int main() {
  vector<int> arr(25,0);
  vector<int> arr1(25,0);
  int q=0
   countAnsSay(4,arr,arr1,q);
}

