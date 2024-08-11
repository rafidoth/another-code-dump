#include<bits/stdc++.h> 
using namespace std;



const int N = 1e7+2;
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




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();        
    int n;
    while(cin >> n){
        if(n==0) break;
        if(p(n)) cout << 0 << endl;
        else{
            int x = n+1;
            while(!p(x)) x++;
            int y = n-1;
            while(!p(y)) y--;
            cout << x-y << endl;
        } 
    }
}

