
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



int main(){
  fastio();
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n ;
    string a,b;
    cin >> a >> b;
    int o_count = 0;
    for(int i =0; i<n; i++){
      if(b[i]=='o') o_count++;
    }
    if(o_count ==0 ) cout << "NO\n";
    else cout << "YES\n";
  }
}





