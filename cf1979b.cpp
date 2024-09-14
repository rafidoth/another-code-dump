
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007

bool getBit(lli x, int k){
    return (x&((lli)1<<k));
}

void f(){
  lli x,y;
  cin >> x >> y;
  lli z = x^y;
  int c =0;
  for(int i = 0; i<31; i++){
    if(getBit(z,i)) break; 
    else c++;
  }
  cout << (1<<c)<< endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

