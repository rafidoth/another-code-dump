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

    int t;
    cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n;
        cin >>n;
        if(n%2==0) cout << n/2 << "\n";
        else cout << (n-1)/2 << "\n";
    }

}

