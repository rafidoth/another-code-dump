#include<bits/stdc++.h> 
using namespace std;


typedef unsigned long long ull;


const int N =100000;
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


ull mighty_pow(ull x, ull y){
    if(y==0) return 1;
    else if(y%2==0) return mighty_pow(x,y/2) * mighty_pow(x,y/2);
    else return x*mighty_pow(x,y/2)*mighty_pow(x,y/2);
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    ull a = 18446744073709551615;
    ull res = 2;
    set<ull> ans;
    for(int k = 2;k<65537;k++){
        bool f = false;
        for(int i = 4; i< 100;i++){
            if(!p(i)){
                if(i*log2(k)<64){
                    res = mighty_pow(k,i);
                    if(res>= a || res ==0){
                        f = true;
                        break;
                    }
                    ans.insert(res);
                }
            }
        }
    }
    ans.insert(1);

    for(auto x: ans) cout << x << endl;
    

    

}
