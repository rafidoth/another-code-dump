
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n;i++) cin >> arr[i];
    map<int,int> mp;
    for(int x : arr) mp[x]++ ;
    if(mp[1]%2==0 && mp[2]%2==0) cout << "YES" << endl;
    else if(mp[2]%2==1 &&  mp[1] %2==0 && mp[1]!=0) cout << "YES" << endl;
    else cout << "NO" << endl;
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

