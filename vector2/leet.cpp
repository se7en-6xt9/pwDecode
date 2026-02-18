#include<iostream>
#include<vector>
using namespace std;
  int main(){
    //int n=11+6;
    int n;
    int count=1;
    int i;
    vector<int> last;
    cout<<"Enter lenght of arr : ";
    cin>>n;
    int arr[n];
    //int arr[]={10,30,10,30,10,20,20,90,90,90,90,4,4,4,4,4,4};
    for(int b=0; b<n; b++){
      cout<<"Enter element no "<<b+1<<" : ";
      cin>>arr[b];
    }
    cout<<endl<<" straing game ..\n\n";
    vector<int> ans={};
    sort(arr,arr+n);
    for( i=0; i<n-1; i++){
      if(arr[i]==arr[i+1]){
        count++;
      } else{
        ans.push_back(arr[i]);
        ans.push_back(count);
        count=1;
      }
    } 
    if(arr[i-1]!=arr[i]){
      ans.push_back(arr[i]);
      ans.push_back(1);
    } else{
        ans.push_back(arr[i-1]);
        ans.push_back(count);
    }
    for(int k=0; k<ans.size(); k++){
      cout<<ans[k]<<":";
    }
    cout<<endl<<"showing Ans \n\n";
    n=1;
    int m;
    int count2=0;
    int count3=0;
    while(n<ans.size()){
      m=1;
        while(m<ans.size()){
          if(ans[n]==ans[m]){
            count2++;
          }
          m=m+2;
        }
        if(count2==1){
          count3++;
          last.push_back(ans[n-1]);
          //cout<<ans[n-1]<<" ";
          count2=0;
        }
        count2=0;
        n=n+2;
    }
    if(last.size()==ans.size()/2){
      cout<<last[0]<<endl;
    } else{
      for(int d=0; d<last.size(); d++){
        cout<<last[d]<<" ";
      }
    }


    return 0;
  }







