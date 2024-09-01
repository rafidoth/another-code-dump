
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int a,b;
    cin >> a >> b; 
    if(a%2==1){
        cout << "NO" << endl;
        return;
    }else if(b%2==1 && a <2){
        cout << "NO" << endl;
        return;
    }else{
        cout <<"YES" << endl;
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

