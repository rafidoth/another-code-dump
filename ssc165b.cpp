
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
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i =0; i<n;i++){
        int c = 0;
        int x = arr[i];
        while(x%2==0){
            x/=2;
            c++;
        }
        ans = min(c,ans);
    }
    cout << ans << endl;
}
