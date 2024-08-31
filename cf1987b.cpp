
#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }
    vector<int> a = arr;
    for(int i = 1 ; i <n;i++){
       if(a[i]<a[i-1]) a[i] = a[i-1];
    }
    vector<int> ops;
    for(int i = 0; i<n;i++){
        if(arr[i] != a[i]) ops.push_back(a[i] - arr[i]);
    }
    int N = ops.size();
    lli p = 0;
    lli ans = 0; 
    sort(ops.begin(),ops.end());
    for(int i =0; i<N; i++){
        int x = ops[i] - p;
        ans += (lli)x*(N-i+1); 
        p += x;
    }
    cout << ans << endl;

}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        func();
    }
}

