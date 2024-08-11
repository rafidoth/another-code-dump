#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void soln(){
    int n;
    cin >>n ;
    lli m;
    cin >> m;
    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    if(n==1){
        if(arr[0] == m){
            cout << m << endl;
            return;
        }else{
            cout << 0 << endl;
            return;
        }
    }

    sort(arr.begin(), arr.end());
    int q = 0;
    lli sum = 0;
    lli ans = 0;
    for(int p = 0; p <n;p++){
       sum += arr[p]; 
       for(;q<n &&(arr[p]-arr[q] > 1 || sum > m);q++){
            sum-=arr[q];
       } 
       ans = max(ans,sum);
    }
    cout << ans << endl;
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
    for(int i = 0;i<t;i++){
        soln();
    }
}


