
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


set<int> common_factors;
bool sig;
void f(int n){
    for(int prime : primes){
        if((long long)prime*prime > n) break;
        if(n%prime==0){
            if(common_factors.count(prime)!=0){
                cout << "YES" <<  endl; 
                sig = true; 
                return; 
            }
            common_factors.insert(prime); 
            while(n%prime==0){
                n/= prime;
            }
        }
    }

    if(n>1){
        if(common_factors.count(n)!=0){
            cout << "YES" <<  endl; 
            sig = true; 
            return; 
        }
        common_factors.insert(n);
    }  
}

void func(){
    sig = false;
    common_factors.clear();
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0 ; i<n; i++){
        cin >> arr[i];
    }
    for(int x : arr) {
        if(!sig) f(x);
        if(sig) return;
    }    
    cout << "NO" << endl; 
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    sieve();
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        func();
    }
}

