#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


int div_by_a_or_b(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1 + c2 -c3;
}


int gcd(int a , int b){
    if(!b) return a;
    else return gcd(b,a%b);
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

}

