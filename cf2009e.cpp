
#include<bits/stdc++.h> 
#include <cstdlib>
using namespace std;
typedef int64_t intt; 
// intt64_t = 64bits(8 bytes)
#define MOD 1000000007

void f(){
  intt n,k;
  cin >> n >> k;

  auto sum = [&](intt a, intt n){
    intt s  = a*n;
    s+=(n*(n-1))/2;
    return s;
  };
  
  intt total = sum(k,n);

  auto getpmq = [&](intt i){
    return 2*sum(k,i+1) - total;
  };

  intt ind = 0;
  for(intt i =n/2; i>=1;i/=2){
    while(ind+i < n && getpmq(ind+i) <= 0){
      ind+=i;
    } 
  }
  intt ans1 = getpmq(ind);

  ind = 0;
  for(intt i =n/2; i>=1;i/=2){
    while(ind+i < n && (-1)*getpmq(ind+i) >= 0){
      ind+=i;
    } 
  }
  intt ans2 = getpmq(ind+1);

  cout << min(abs(ans1), abs(ans2))  << "\n";
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    intt testcase; 
    cin >> testcase;

    for(intt i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

