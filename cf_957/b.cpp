#include<bits/stdc++.h> 
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> arr(k);
    int mi = arr[0];
    int mx = arr[0];
    int mx_idx = 0;
    int ones = 0;
    for(int i = 0; i<k;i++){
        cin >> arr[i];
        if(arr[i] > mx){
            mx = arr[i];
            mx_idx = i;
        } 
        if(arr[i]==1) ones++;
        if(arr[i] < mi) mi = arr[i];
    }
    if(n==k){
        cout << n-1<< "\n";
        return;
    }
    int ans = 0;
    for(int i = 0;i <k;i++){
        if(arr[i]!=1 && i!= mx_idx){
            ans += (2*arr[i] -1);
        }
    } 
    ans+= ones;
    cout << ans<<endl;
}

int main(){
     #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ; 
    cin >> t;
   while(t--){solve();} 
}

