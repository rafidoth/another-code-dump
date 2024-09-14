
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 10000007

long long int saved[10000];
int a, b, c, d, e, f;

int main() {
    int t ;
    cin >> t;
    int c =1; 
    while(t--){
      for(int i=0;i<6; i++) cin >> saved[i], saved[i]%=MOD;
      int n;
      cin >> n; 
      for(int i = 6; i<=n; i++){
        lli sum =0;
        for(int k = 1; k<=6; k++) sum += (saved[i-k]%MOD);
        sum%=MOD;
      }
      
      cout << "Case " << c << ": " << saved[n] << '\n';
      c++;
    }
}




