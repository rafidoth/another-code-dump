
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int n;
vector<int> coins;
lli dp[10000007];
lli f(int x){
    if(x==0) return 1;
    if(dp[x] != -1) return dp[x];
    lli curr = 0;
    for(int coin : coins){
        if(coin <= x ) curr += (f(x-coin)%MOD);
    }
    return dp[x] = curr%MOD; 
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(auto& p : dp) p = -1;
    cin >> n;
    int x;
    cin >> x;
    vector<int> a(n);
    for(int i =0; i<n;i++) cin >> a[i];
    coins = a;
    cout << f(x) << endl;
}
