
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int ulint;
#define MOD 1000000007



void func(){
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin >> arr[i] ;
    }
    string str;
    cin >> str;

    vector<lli> pre(n);
    pre[0] = arr[0];
    for(int i = 1; i<n;i++){
        pre[i] = arr[i] + pre[i-1];
    }

    int p = 0;
    int q = n-1;
    ulint ans = 0;
    while(p<q){
        while(str[p]=='R') p++;
        while(str[q]=='L') q--; 
        if(p>q) break; 
        ulint sum; 
        if(p!=0)sum =  pre[q] - pre[p-1];
        else sum = pre[q];
        ans += sum;
        p++;
        q--;
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
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        func();
    }
}

