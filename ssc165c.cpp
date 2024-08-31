
#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int lli;
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

lli pw(int a, int n){
    if(n==0) return 1;
    lli res = pw(a,n/2);
    if(n%2 ==0) res *= res;
    else res = a*res*res;
    return res;
}


bool p(int x){
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    else return !is_prime[x];
}

void func(){
    lli h;
    cin >> h;
    if(p(h)){
        cout << 1 << endl;
        return;
    }
    lli damage = 0;
    int c= 0;
    for(int i =1; damage <=h; i++){
        damage = pw(2,i)-1;
        c++;
        if(h-damage==0){
            cout << c << endl;
            return;
        }
        if(p(h-damage)){
            cout << c+1 << endl;
            return;
        }
    }
    if(damage == h){
        cout << c << endl;
        return;
    }
    cout << -1 << endl;
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

