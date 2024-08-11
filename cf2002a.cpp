
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void f(){
    int n,m,k;
    cin >> n >> m >> k;
    lli ans =0;
    if(k < n){
        ans += ((n-k)*m);
    }
    if( k < m){
        ans += ((m-k)*n);
    }
    if(k < n && k < m) ans -= ((n-k)*(m-k));
    lli total = n*m;
    cout << total - ans << endl;
}



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

