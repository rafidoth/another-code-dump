
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n;
    cin >>n;
    string s,t;
    cin >> s >> t;

    if(s[0]=='1') cout << "YES" << "\n";
    else{
        int a =0;
        int b = 0;
        for(int i =0; i<n; i++){
            char x = s[i];
            char y = t[i];
            if(x=='0') a++;
            else b++;

            if(x!=y){
                if(x=='0'&& b==0){
                    cout <<"NO" << "\n";
                    return;
                }
            }
        }
        cout << "YES" << "\n";
    }
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

