
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    string str;
    cin >> str;
    int n = str.size();
    bool f = false;
    cout << str[0];
    for(int i =1; i<n; i++){
        if(str[i] == str[i-1] && !f){
            int x = str[i];
            if(str[i]=='z'){
                cout << 'a';
            }else{
                char p = x+1;
                cout << p ;
            }
            f = true;
        } 
        cout << str[i]  ;
    }
    if(!f){
        char x = str[n-1];
        if(x=='z'){
            cout << 'a';
        }else{
            x++;
            cout << x; 
        }
    }
    cout << "\n" ;
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

