
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
        int n;
        cin >> n;
        vector<int> arr(n);
        int mx = 0;
        for(int i =0; i<n;i++){
            cin >> arr[i];
            if(arr[i] > mx) mx = arr[i];
        } 

        // A = true
        // B = false
        map<int,int> mp;
        for(int i : arr) mp[i]++;
        int x = mp[mx];
        if(x%2==0){
            bool f = true;
            for(auto pair : mp){
                if(pair.second % 2== 1){
                    cout << "YES" << "\n";
                    f = false;
                    break;
                }
            }
            if(f) cout << "NO" << "\n";  
        } 
        else cout << "YES" << "\n";
        
        
    }
}
