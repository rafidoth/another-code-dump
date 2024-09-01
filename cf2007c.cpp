
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    for(int i =0 ; i <n ;i++) cin >> arr[i];
    int gcd = __gcd(a,b);
    for(int i =0; i<n; i++) arr[i]%=gcd;
    sort(arr.begin(),arr.end());
    int ans = arr.back()-arr.front();
    for(int i =1; i<n; i++) ans = min(ans,gcd+arr[i-1]-arr[i]);
    cout << ans << "\n";
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

