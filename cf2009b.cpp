
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
  int r;
  cin >> r;
  char arr[r][4];
  for(int i =0; i<r; i++){
    for(int k = 0; k <4; k++) cin >> arr[i][k];
  }

  for(int i = r-1; i>-1; i--){
    int k;
    for(k = 0; k<4; k++) if(arr[i][k]=='#') break;
    cout << k+1 << " ";
  }
  cout << "\n";

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

