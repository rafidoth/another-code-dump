#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

const int N = 1e6+2;
vector<long long int> primes;

bool is_prime[N+2];
void sieve(){
    is_prime[0] = 1;
    is_prime[1] = 1;
    for(int i = 3;i*i<=N;i+=2){
        if(!is_prime[i]){
            for(long long k = i*i; k<=N;k+=i){
                is_prime[k] = 1;
            }
        }
    }
}

bool p(int n){
    if(n<3) return false;
    if(n%2==0) return false;
    return !is_prime[n];
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(); 
    int n;
    while(cin >> n){
        if(n==0) break;
        int x = n;
        int y =0;
        while(!p(x) || !p(y)){
            x--;
            y++;
            if(p(x) && p(y)){
                cout << n << " = " << y << " + " << x << endl;
                break;
            }
        }

    }
}

