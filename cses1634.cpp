
#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int uli;
#define MOD 1000000007


vector<int> coins; 
int dp[10000006];
uli f(int x){
    if(x==0) return 0;
    if(dp[x]!=-1) return dp[x];
    uli min_c = INT_MAX;
    for(int i : coins){
        if(x-i>=0) min_c = min(min_c, f(x-i)+1); 
    }
    dp[x] = min_c;
    return min_c;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(auto& p : dp) p = -1;
    int n,x; 
    cin >>n >> x;
    vector<int> arr(n);
    for(int i =0; i<n;i++) cin >> arr[i];
    coins = arr;
    int ans = f(x);
    if(ans ==INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
}
