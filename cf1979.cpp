
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int lcm = 1;
    for(int i =0; i<n; i++){
        cin >> arr[i];
        lcm = (arr[i]*lcm)/__gcd(arr[i],lcm);
    } 

    vector<int> ans(n);
    int sum = 0;
    for(int i =0; i<n; i++){
        ans[i] = lcm/arr[i];
        sum+=ans[i];
    }
    for(int i =0; i<n; i++){
       if(ans[i]*arr[i] < sum){
            cout << -1 << "\n";
            return;
       }
    }
    
    for(int x : ans) cout << x << " ";
    cout << '\n';
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

