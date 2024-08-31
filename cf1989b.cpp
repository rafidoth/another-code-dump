
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007


int cnt[26];
string f2(string s, string t){
    int n = s.size();
    int m = t.size();
    memset(cnt,0,sizeof(cnt));
    for(char x: s) cnt[(int)x-'a']++;
    string pre = "";
    int i = 0;
    for(; i<m; i++){
        char x = t[i];
        if(!cnt[(int)x-'a']) pre+=x;
        else break;
    }
    int p =0; 
    for(; i <m;){
        while(s[p]!=t[i] && p < n) p++;
        if(s[p]==t[i]){
            i++;
            p++;
        } 
        if(p==n) break;
    }
    string post = "";
    for(;i<m;i++) post+=t[i];
    
    
    /* cout << pre<<" " <<s<< " " << post<< "\n"; */
    string ans = pre+s+post;
    return ans;
}

void f(){
    string s,t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int ans = n+m;
    for(int i=0; i<m; i++){
        int p = i;
        for(int j = 0; j <n;j++)
            if(p < m && t[p]==s[j]) p++;
        ans = min(ans,n+m-(p-i));
    }
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

