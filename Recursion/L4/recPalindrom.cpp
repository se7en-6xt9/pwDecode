//Done by self
#include<iostream>
#include<string>
using namespace std;
string isPalindrom(const string &s,int idx){
  if(idx>=s.length()-1-idx) return "Yes palindrom";
  if(s[idx]!=s[s.length()-idx-1]) return "No";
  return isPalindrom(s,idx+1);
}
  int main(){
  cout<<isPalindrom("abcba",0)<<" "<<endl;
  return 0;
  }

/*
============================================================================
                    COMPLEXITY ANALYSIS (Pass-by-Value)
============================================================================

1. ROOT CAUSE (Wajah):
   - Argument `string s` pass kiya gaya hai (bina '&' ke).
   - Iska matlab har recursive call par string ki ek NEW COPY banti hai.

----------------------------------------------------------------------------
2. TIME COMPLEXITY (TC): O(N^2)
----------------------------------------------------------------------------
   Logic:
   - Recursion Depth (Tree ki height) : N/2 calls (approx).
   - Work per Call (Har node ka kaam) : String copy karne mein O(N) time lagta hai.

   Formula:
   Total Time = (Number of Nodes in Tree) * (Time to Copy String)
              = (N / 2) * O(N)
              = O(N^2)  [Quadratic Time]

----------------------------------------------------------------------------
3. SPACE COMPLEXITY (SC): O(N^2)
----------------------------------------------------------------------------
   Logic:
   - Stack Depth (Max frames)      : N/2 active frames memory mein honge.
   - Memory per Frame              : Har frame O(N) space lega (kyunki string copy hui hai).

   Formula:
   Total Space = (Max Stack Height) * (Memory per Frame)
               = (N / 2) * O(N)
               = O(N^2)  [Quadratic Space]

============================================================================
*/

