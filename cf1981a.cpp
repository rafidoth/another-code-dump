
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
  int x,y;
  cin >> x >> y;
  int t = 1;
  int c =0;
  while(t <= y) t = t<<1,c++;
  cout << c-1 << endl;
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

