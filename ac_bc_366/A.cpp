
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007






int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,t,a;
    cin >> n >> t >> a;
    
    int p1 = min(t,a);
    int p2 = max(t,a);

    if(n-(t+a) >= (p2-p1)){
        cout << "NO" << endl;
    }else cout << "YES" << endl;
}
