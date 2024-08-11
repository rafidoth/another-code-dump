
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


void fukyou(){
    int n,x;
    cin >> n >> x;
    int ans = 0;
    for(int a = 1; a <= n; a++){
        for(int b = 1 ; b * a <= n; b++){
            int c =min( x - a - b, (n - (a*b))/(a+b));
            if(c > 0) ans+= c;
        }
    }
    cout << ans << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int e;
    cin >> e;
    for(int i = 0; i <e; i++){
        fukyou();
    }
}
