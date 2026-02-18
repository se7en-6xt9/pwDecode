#include<iostream>
#include<string>
using namespace std;

void permuatation(string ans,string orginal,int count , int k){
  if (count==k && orginal==""){
      cout<<ans<<endl;
    return;
    }
  else if(orginal==""){
        count++;
        return;
    }
    for(int i=0; i<orginal.length(); i++){
        char ch = orginal[i];
        string left = orginal.substr(0,i);
        string right = orginal.substr(i+1);
        permuatation(ans+ch,left+right,count,k);
    }
}

int main(){
    string str = "123";
    permuatation("",str,1,3);
    return 0;
}
