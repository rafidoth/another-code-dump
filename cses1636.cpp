#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



int f(int x, int n , vector<int>& coins){
    vector<vector<int>> dp(x + 1, vector<int>(n, 0));
    for(int i =0; i<n; i++) dp[0][i] = 1;
    for(int i =1; i<=x; i++){
        for(int k =n-1; k>=0; k--){
            if(i-coins[k]>=0) dp[i][k] += dp[i-coins[k]][k];
            if(k+1 < n) dp[i][k+1];
        }
    }
    
    for(int i = 0; i<x+1; i++){
        for(int j =0 ; j<n; j++){
            cout << i << " " << coins[j] << " " << dp[i][j] << "\n";
        }
    }

    int ans = 0;
    for(int i= 0; i<n; i++) ans+=(dp[x][i]);
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> coins(n);
    for(int i =0; i<n;i++) cin >> coins[i];
    sort(coins.begin(),coins.end());
    cout << f(x,n,coins)<< "\n";
}
