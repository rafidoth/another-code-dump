#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



const int N =100005;
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
    if(n==2) return true;
    if(n<2) return false;
    if(n%2==0) return false;
    return !is_prime[n];
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int n;
    cin >> n;
    if(n <3) {
        cout << 1 << endl;
        for(int i =0 ; i <n; i++) cout << 1 << " ";
        cout <<endl;
    } else{
        cout << 2 <<endl;
        for(int i = 2; i <=n+1;i++){
            if(p(i)) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << endl;
    }
}

