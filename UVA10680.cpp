
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;
#define MOD 1000000007



const int N = 1e7+2;
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


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int n;
    while(cin>>n){
        if(n==0) break;
        int LCM = 1;
        int twospw= 0, fivespw = 0;
        for(int prime : primes){
            if(prime > n) break;
            ulli y = 1;
            int pw = 0;
            while(y <= (ulli)n){
                y*= prime;
                pw++;
                if(y > (ulli)n){
                    y/= prime;
                    pw--;
                    break;
                }
            }
            if(prime == 2){
                twospw = pw;
                continue;
            }
            if(prime == 5){
                fivespw = pw;
                continue;
            }
            LCM = ((LCM % 10) * (y%10)) %10;
        }
        int diff = max(twospw, fivespw)- min(twospw,fivespw);
        if(twospw > fivespw){
            int p = 1;
            while(diff){
                p *= 2;
                diff--;
            }
            LCM = ((LCM%10) * (p%10))%10;

        }else if(twospw < fivespw){
            int p = 1;
            while(diff){
                p *=5;
                diff--;
            }
            LCM = ((LCM%10) * (p%10))%10;
        }
        cout << LCM << endl;
    }
    
}
