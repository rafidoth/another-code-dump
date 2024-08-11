
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    map<char,int> mp;
    for(char x : str){
        if(x=='?') continue;
        if(mp[x]+1 <=n) mp[x]++;
    }
    
    int ans = 0;
    for(auto p:mp){
        ans+= p.second;
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

