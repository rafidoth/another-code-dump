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
        int n,k;
        cin >> n >> k;
        if (k==0) cout << 0 << endl;
        else if(k-n <=0) cout << 1 << endl;
        else if (k>=n*n) cout << 2*n -1 << endl;
        else{
            k-= n;
            int m= n-1;
            int cnt = 1;
            for(int i = 0; i < n-1 && m>0; i++){
                if(k-m >=0){
                   k-=m; 
                   cnt++;
                }
                if(k-m >=0){
                    k-=m;
                    cnt++;
                } 
                m--;
            } 
            cout << cnt << endl;
        }
    }
}

