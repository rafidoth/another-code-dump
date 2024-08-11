#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



const int N = 150;
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

map<int,int> prime_factorization(int n){
    int N1 = n;
    map<int,int> pf;
    if(n==2){
        pf[2] =1 ;
        return pf;
    }
    // if n is prime then no factorization will happen
    if(n%2 ==1 && !is_prime[n]){
        pf[n] = 1;
        return pf;
    } 

    for(int prime : primes){
        if((long long)prime*prime > N1) break;
        int pw = 0;
        while(n%prime==0){
            n/= prime;
            pw++;
        }
        pf[prime] = pw; 
    }
    if(n>1) pf[n] = 1; 
    return pf;
}




int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    sieve();
    int t;
    cin >> t;
    for(int tc= 1; tc<=t;tc++){
        int n;
        cin >> n;
        map<int,int> ans;
        for(int i = 2;i<=n;i++){
            map<int,int> prfact = prime_factorization(i);
            /*
            cout << " debug  ::::::::: " << endl;
            cout << " prime factorization of " << i << endl;
            for(auto pair : prfact) {
                cout << pair.first << "^" << pair.second << endl;
            }
            */
            for(auto pair : prfact){
                ans[pair.first]+= pair.second;
            } 
        }
        cout << "Case " << tc << ": "<< n << " = " ;
        int c = 0;
        for(auto pair : ans){
            if(c!=0) cout << " * ";
            cout << pair.first<< " (" << pair.second<< ")";
            c++;
        }
        cout << "\n";
    }


}

