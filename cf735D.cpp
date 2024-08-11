#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



bool p_check(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i = 3; i*i <=n;i+=2){
        if(n%i==0) return false;
    } 
    return true;
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    if(p_check(n)) cout << 1 << endl;
    else if(n%2 == 0) cout << 2 << endl;
    else {
        if(p_check(n-2)) cout << 2 << endl;
        else cout << 3 << endl;
    }     
    
}

