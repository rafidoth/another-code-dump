#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int N = 20;
int gcd(int a, int b){
    if(!b) return a;
    else return gcd(b, a%b);
}
vector<int> g(N+10);
void pre(){
    g[1]= 1;
    g[2] = 1;
    for(int i = 3; i<=N;i++){
        g[i]= gcd(i,g[i-1]);
    }
}



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre(); 
    for(int x : g) cout << x << endl ;
    
}

