#include<bits/stdc++.h> 
using namespace std;


void solve(){
    int g,l;
    cin >> g >> l;
    if(l%g==0){
        cout << g << " " << l <<endl;
    }else cout << -1 << endl;
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
    while(t--){
        solve();
    }
}

