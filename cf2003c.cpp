
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007
int cnt[30];

void f(){
    int n;
    cin >> n;
    string s;
    cin >>s;
    for(int i =0; i<n; i++){
        cnt[(int)(s[i]-'a')]++;
    } 
    int p = 0;
    for(int i =0; i<n; i++){
        while(cnt[p]==0){
            p++;
            p%=26;
        } 
        cnt[p]--;
        char ch = p+'a';
        cout << ch ; 
        p++;
        p%=26;
    }
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

