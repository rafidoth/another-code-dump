#include<bits/stdc++.h> 
using namespace std;



const int N = 1e6+2;
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



int totient(int n){
    int ans = n;
    for(int prime : primes){
        if((long long) prime*prime > n) break;
        if(n%prime==0) ans -= (ans/prime);
        while(n%prime == 0) n/=prime;
    }
    if(n>1) ans -= (ans/n);
    return ans;
}



int main(){
    sieve();
    cout << totient(12) <<endl;
}

