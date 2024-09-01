
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007

int g(int a,int b){
    return __gcd(a,b);
} 

const int N = 1200;
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
}

bool p(int n){
    if(n==2) return true;
    if(n<2) return false;
    if(n%2==0) return false;
    return !is_prime[n];
}

void f(){
    vector<bool> cnt(1001,false);
    int L,R;
    cin >> L >> R;

    int prime =0; 
    int odd = 0;
    int even = 0;
    for(int i = L; i<=R; i++){
        if(i%2==0) even++;
        else if(p(i)) prime++;
        else odd++;
    }
    int c = 0;
    while(prime!=0 && odd!=0 && even!=0){
        prime--;
        odd--;
        even--;
        c++;
    }

    while(prime-2>=0 && odd==0 && even!=0){
        prime-=2;
        even--;
        c++;
    }
    cout << c << endl; 

}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        /* cout << "Test Case No " << i << "\n"; */
        f();
    }
}

