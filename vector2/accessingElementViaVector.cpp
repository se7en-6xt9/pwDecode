#include<iostream>
#include<string>
#include<vector>
using namespace std;
    int main(){
        vector<string> ans = {"Raju","TejoBaby","radhike"};
        // cout<<"\nans[0] : "<<ans[0]<<endl;
        // cout<<"\nans[0][1] : "<<ans[1][1]<<endl;
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].length(); j++){
                cout<<ans[i][j];
            }
            cout<<"\n";
        }
        return 0;
    }
