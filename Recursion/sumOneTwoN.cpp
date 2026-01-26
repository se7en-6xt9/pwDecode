#include <iostream>
using namespace std;
   int sum(int n,int s,int i){
     if(n==0){
       return s;
     }
     s = s + i;
     return sum(n-1,s,i+1);

   }
int main() {
    cout<<sum(5,0,1)<<endl;
    return 0;
}

