#include<bits/stdc++.h> 
using namespace std;


void solve(){
    int n, m ,k; cin >> n >>m >> k;
    for(int i =n; i>m;i--){
        cout << i << " ";
    }
    for(int i = 1;i<=m;i++) cout << i << " ";
    cout <<endl;
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >>t ;
    while(t--) solve();
}

