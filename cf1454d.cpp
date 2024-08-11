include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



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

bool p(lli n){
    if(n<=2) return false;
    if(n==2) return true;
    if (n%2 ==0) return false;
    for(lli i = 3; i*i <=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}


vector<lli> prime_factors;
void prime_factorization(lli n){
    prime_factors.clear();
    // if n is prime then no factorization will happen
    if(n%2 ==1 && p(n)) return;
    for(lli prime : primes){
        if((long long)prime*prime > n) break;
        while(n%prime==0){
            prime_factors.push_back(prime);
            n/= prime;
        }
    }
    if(n>1) prime_factors.push_back(n);
}


pair<int,int> max_prime_factor(){
    map<int,int> mp;
    for(int x : prime_factors) mp[x]++;
    int mx_f = 0;
    int mx = 0;
    for(auto pair:mp){
        if(pair.second > mx){
            mx = pair.second;
            mx_f = pair.first;
        }
    }
    return make_pair(mx_f, mx);
}

void soln(){
    //cout << "new test case " << endl;
    lli n; 
    cin >> n;
    if(p(n)){
        cout << 1 << endl;
        cout << n << endl;
        return;
    }
    prime_factorization(n);
    pair<int,int> mx = max_prime_factor();
    int mxPrimeFactor = mx.first;
    int mxPrimeFactorPw = mx.second;
    
    cout << mxPrimeFactorPw <<endl;
    lli prod = 1;
    for(int i = 0; i < mxPrimeFactorPw-1;i++){
        cout << mxPrimeFactor << " ";
        prod*=mxPrimeFactor;
    }
    cout << n/prod << endl;
}

int main(){

    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t;
    cin >> t;
    while(t--) soln();
}

