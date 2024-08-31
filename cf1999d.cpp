
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    string s,t;
    cin >> s >> t;
    
    int S = s.size();
    int T = t.size();
    
    int k = 0;
    for(int i =0; i<S; i++){
        if(k == T) break;
        if(s[i] == t[k]){
            t[k]= '*';
            k++;
        }else if(s[i] == '?'){
            s[i] = t[k];
            t[k]= '*';
            k++;
        }
    }
    
    for(int i =0; i<S; i++){
        if(s[i]=='?') s[i] = 'x';
    }

    bool f = true; 
    for(char x : t) if(x!='*') {f=false; break;}

    if(f){
        cout << "YES" << endl;
        cout << s << endl;
    } 
    else cout << "NO" << endl;
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

