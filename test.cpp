#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007




lli pw(int a, int n){
    if(n==0) return 1;
    lli res = pw(a,n/2);
    if(n%2 ==0) res *= res;
    else res = a*res*res;
        
    return res;
}





int main(){
    cout << pw(2,8) << endl;
}

