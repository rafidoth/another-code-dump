
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
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int mx = arr[0];
        for(int i =0; i < n; i+=2){
            if(arr[i] > mx) mx = arr[i];
        }
        cout << mx << endl;
    }
}
