
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



const int N = 1e8+2;
vector<long long int> primes;

bool is_prime[N+2];
/* 0 means prime */
/* 1 means not prime  */
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
    primes.push_back(2);
    for(int i = 3; i<= N; i+=2){
        if(!is_prime[i]) primes.push_back(i);
    }
}


bool p(int x){
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    return !is_prime[x];
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
    while(cin >> n){
        if(n%2==1){
            if(p(n-2)){
                cout << n << " is the sum of "<< 2 << " and " << n-2 << "."<< endl;
            }else{
                cout << n << " is not the sum of two primes!"<< endl;
            }
        }else{
            bool f = true;
            auto closest = upper_bound(primes.begin(), primes.end(),n/2);
            for(int i = distance(primes.begin(),closest); i>-1; i--){
                int prime = primes[i];
                if(p(n-prime) && prime != n-prime){
                    f = false;
                    int x = min(prime,n-prime);
                    cout << n << " is the sum of "<< x << " and " << n - x<< "."<< endl;
                    break;
                }
            }
            if(f) cout << n << " is not the sum of two primes!"<< endl;
            
        }
    }
}
