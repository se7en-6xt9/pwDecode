#include <iostream>
#include <string>
#include <vector>
using namespace std;
void TOH(int n,char S , char H , char D){
  if(n==1){
 cout<<"Move disk "<<" 1 "<<S<<" To "<<D<<endl;
   return;
  }
  TOH(n-1,S,D,H);
  cout<<"Move disk "<<n<<" from "<<S<<" To "<<D<<endl;
  TOH(n-1,H,D,S);
  }
int main() {
  TOH(3,'S','H','D');  
  return 0;
}

