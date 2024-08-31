
#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int uli;
#define MOD 1000000007

int dp[10000006];

// f(10) = f(9) + f(8) + f(7) + f(6) + f(5) + f(4)
int f(int state, uli ways){
    if(state == 1) return 1;
    else if(state == 2) return 2;
    if(dp[state] != -1) return dp[state];
    uli current_ways = 0; 
    if(state <=6) current_ways= 1;
    for(int i = 1; i<min(7,state);i++){
        current_ways += (f(state-i,ways))%MOD;
    }
    current_ways%= MOD;
    ways += (current_ways)%MOD; 
    dp[state] = current_ways;
    return ways%MOD;
}


int f2(int n){
    int dpi[1000007];
    dpi[0]=1;
    for(int i =1; i<=n ; i++){
        uli x =0;
        for(int j = 1; j<=6; j++){
            if(j<=i) x+=(dpi[i-j]%MOD);
        }
        dpi[i]=(x%MOD);
    }
    return dpi[n];
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(auto& e : dp) e = -1;
    int t;
    //cin >> t;
    t = 1;
    while(t--){
        int n;
        cin >>n;
        /* cout << f(n,0) << endl;  */
        cout << f2(n) << endl;
    }
}
