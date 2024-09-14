

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  typedef long long ll;
  typedef unsigned long long ull;
  typedef long double lld;
  int f(int current, int rem){
    if(rem == 0) return 1; 
    else if(rem < 0) return 0;
    else if( current * current > rem ) return 0;
    else{
      int taken = 1+f(current, rem - (current * current));
      int notTaken = 1+f(current+1, rem);
      return min(taken, notTaken);
    }
  }

  int numSquares(int n){
    return f(1,n);
  }
};

int main() {
  Solution soln;
  cout << soln.numSquares(12) << '\n';
}
