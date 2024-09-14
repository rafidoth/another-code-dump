
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
  int x,y,k;
  cin >> x >> y >> k;
  int a = x/k;
  if(x%k >0) a++;
  a*=2;

  int b = y/k;
  if(y%k>0) b++;
  b*=2;
  
  if( a<= b) cout << b << endl;
  else cout << a -1 <<endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        // cout << "Test Case No " << i << "\n";
        f();
    }
}

