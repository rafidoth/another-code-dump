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


int numofdivisors(long long int n){
    int count = 1;
    for(int prime : primes){
        if((long long)prime*prime > n) break;
        if(n%prime==0){
            int pw = 0;
            while(n%prime==0){
                n/= prime;            
                pw++;
            }
            count *= (pw+1);    
        }
    }
    // if the number is a prime itself then
    // there will be no prime factor less than
    // its square root in that case only 2 divisors
    // 1 and the number it self
    if(n>1) count *=2; 
    return count; 
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(); 
    int tc;
    cin >> tc;
    for(int t = 1; t<=tc;t++){
        cout << "Case " << t << ": ";
        long long int n;
        cin >> n;
        cout << numofdivisors(n) -1 << endl;
    }
}

