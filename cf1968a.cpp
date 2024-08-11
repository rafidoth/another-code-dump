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
    while(t--){
        int x;
        cin >> x;
        int mx = 0;
        int y = 0;
        for(int i = x-1;i > 0;i--){
            int tmp = __gcd(x,i)+i;
            if(tmp > mx){
                mx = tmp;
                y = i;
            } 
        } 
        cout << y << endl; 
    }
}

