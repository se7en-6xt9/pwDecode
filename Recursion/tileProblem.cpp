#include<iostream>
using namespace std;
  int tile(int n){
    if(n==0 || n==1){
      return 1;
    }
    //verticle 
    int ans1 = tile(n-1);
    int ans2 = tile(n-2);
    return ans1+ans2;
  }
int  main(){
  cout<<"Tiles are : "<<tile(5)<<endl;
  return 0;
}

tile(5)
 ├── tile(4)
 │    ├── tile(3)
 │    │    ├── tile(2)
 │    │    │    ├── tile(1) → return 1
 │    │    │    └── tile(0) → return 1
 │    │    │        tile(2) → 2
 │    │    └── tile(1) → return 1
 │    │        tile(3) → 3
 │    └── tile(2)
 │         ├── tile(1) → 1
 │         └── tile(0) → 1
 │             tile(2) → 2
 │         tile(4) → 5
 └── tile(3)
      ├── tile(2)
      │    ├── tile(1) → 1
      │    └── tile(0) → 1
      │        tile(2) → 2
      └── tile(1) → 1
          tile(3) → 3

tile(5) = 5 + 3 = 8
