
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007






int f[100];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n%2==1){
        cout << 0 << "\n";
    } 
    else{
        if(n==0) return 0;
        f[2] = 2;
        for(int i =4; i<= n; i++) f[i] = 2*f[i-2];
        cout << f[n] << "\n";
    }

}
