
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007

void ff(int x,vector<int>& p, vector<bool>& vis, string& str,int& c,vector<int>&ans){
    if(vis[x]) return;
    vis[x] = true;
    if(str[x]=='0') c++;
    ff(p[x],p,vis,str,c,ans);
    ans[x] =  c; 
}

void f(){
    int n;
    cin >> n;
    vector<int> p(n+1);
    for(int i =1;i <=n; i++) cin >> p[i];
    string s;
    cin >> s;
    s = "x"+s; 
    vector<bool> vis(n+1,false);
    vector<int> ans(n+1);
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            int c = 0;
            ff(p[i],p,vis,s,c,ans);
        } 
    }

    for(int i =1; i<=n; i++) cout << ans[p[i]]<< " ";
    cout << "\n";
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

