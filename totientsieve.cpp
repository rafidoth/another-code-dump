#include<bits/stdc++.h> 
using namespace std;

const int N = 1e6+2;
vector<long long int> primes;

bool is_prime[N+9];
/* 0 means prime */
/* 1 means not prime  */
int t[N+9];
void tsieve(){
    is_prime[0] =1;
    is_prime[1] =1;
    for(int i = 1; i<=N; i++) t[i] = i;
    for(int i = 2; i<=N; i++){
        if(!is_prime[i]){
            for(long long k = i; k <= N; k+=i){
                is_prime[k] = 1;
                t[k] = (t[k]/i) * (i-1);
            }
        }
    }
}





int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    tsieve();
    for(int i =1 ; i <101;i++) cout << t[i] << endl;
}

