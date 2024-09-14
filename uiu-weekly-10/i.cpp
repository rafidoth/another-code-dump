
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long lli;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool getBit(lli x, int k){
    return (x&((lli)1<<k));
}

int main(){
  fastio();
  int t;
  cin >> t;
  while(t--){
    lli a,b;
    cin >> a >> b;
    lli ans = 0;
    bool f = true;
    for(int i = 0; i<64; i++){
      if(getBit(a, i) && getBit(b, i)) ans = (ans | (ans & ~((lli)1 << i))); 
      else if(getBit(a, i) && !getBit(b, i)) ans = (ans | ((lli)1 << i)); 
      else if(!getBit(a, i) && !getBit(b, i)) ans = (ans | (ans & ~((lli)1 << i)));
      if(!getBit(a, i) && getBit(b, i)){
        cout << -1<< "\n";
        f = false;
        break;
      } 
    }
    if(f){
      cout << ans << '\n';
    }

  }
}





