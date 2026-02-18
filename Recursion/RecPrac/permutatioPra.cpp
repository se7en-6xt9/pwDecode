#include<iostream>
#include<string>
using namespace std;

void permuatation(string ans,string orginal,int count){
    if(orginal==""){
        cout<<count<<" : "<<ans<<endl;
        return;
    }
    for(int i=0; i<orginal.length(); i++){
        char ch = orginal[i];
        string left = orginal.substr(0,i);
        string right = orginal.substr(i+1);
        permuatation(ans+ch,left+right,count+1);
    }
}

int main(){
    string str = "123";
    permuatation("",str,1);
    return 0;
}
