#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int f1(int n,int x){
    int res = 0;
    for(lli i = x;i <=n;i*=x){
        res +=(int) (n/i);
    }
    return res;
}

int f2(int n,int x){
    int pw = 0;
    while(n%x==0){
        n/=x;
        pw++;
    }
    return pw;
}





void solve(){
    int n,r,p,q;
    cin >> n >> r >> p >> q;
    int ans =0;
    // n! = 2^(i) * 5^(j) 
    int i = f1(n,2);
    int j = f1(n,5);
    
    // r! = 2^(k) * 5^(l)
    int k = f1(r,2);
    int l = f1(r,5);

    // (n-r)! = 2^(m) * 2^(n) 
    int m = f1(n-r,2);
    int o = f1(n-r,5);

    int y = f2(p,2)*q; 
    int z = f2(p,5)*q;
    ans = min (i-k-m+y, j-l-o+z);
    cout << ans <<endl;
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i =0;i<t;i++){
        cout << "Case " << i+1 << ": ";
        solve();
    }

}

