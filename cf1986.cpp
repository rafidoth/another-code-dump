
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    set<int> ind;
    for(int i =0; i<m; i++){
        int x;
        cin >> x;
        ind.insert(x);
    } 
    set<char> c;
    map<char,int> mp;
    for(int i =0; i<m; i++){
        char x;
        cin >> x;
        c.insert(x);
        mp[x]++;
    } 
    auto it_c = c.begin();
    string str = "";
    int a = c.size();
    for(int i =0; i<a; i++){
        int g = mp[*it_c];
        while(g--) str+=(*it_c);
        it_c++;
    }
    a = str.size();
    int b = ind.size();
    auto it_ind = ind.begin();
    for(int i =0; i<min(a,b); i++){
        int idx = *it_ind-1;
        char x = str[i];
        s[idx] = x;
        it_c++;
        it_ind++;
    }
    cout << s << "\n";
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

