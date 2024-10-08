#include<bits/stdc++.h> 
using namespace std;

const int N = 1e8+2;
vector<long long int> primes;

bool is_prime[N+2];
/* 0 means prime */
/* 1 means not prime  */
void sieve(int n){
    is_prime[0] = 1;
    is_prime[1] = 1;
    for(int i = 3;i*i<=n;i+=2){
        if(!is_prime[i]){
            for(long long k = i*i; k<=N;k+=i){
                is_prime[k] = 1;
            }
        }
    }
    primes.push_back(2);
    for(int i = 3; i<= n; i+=2){
        if(!is_prime[i]) primes.push_back(i);
    }
}


vector<int> prime_factors;
void prime_factorization(int n){
    // if n is prime then no factorization will happen
    if(n%2 ==1 && !is_prime[n]) return;
    for(int prime : primes){
        if((long long)prime*prime > n) break;
        while(n%prime==0){
            prime_factors.push_back(prime);
            n/= prime;
        }
    }
    if(n>1) prime_factors.push_back(n);
}

int main(){
    primes.clear();
    sieve(1e7);
    prime_factors.clear();
    prime_factorization(17);
    for(int x : prime_factors) cout << x << " "; 
    cout << "\n";
}

