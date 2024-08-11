
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
        int n,x,y;
        cin >> n >> x >> y;
        vector<int> arr(n+1,1);
        for(int i = y-1; i >=1; i-=2) arr[i] = -1;
        for(int i = x+1; i <=n; i+=2) arr[i] = -1;
        for(int i = 1; i <= n; i++) cout << arr[i] << " ";
        cout << endl;
    }
}
