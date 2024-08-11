#include<bits/stdc++.h> 
using namespace std;



const int N = 1e5+2;
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


bool pcheck(int n){
    if(n%2==0) return false;
    return !is_prime[n];
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int n;
    cin >> n;
    if(n%2==0){
        int x = n/2;
        int y = x;
        if(x%2!=0){
            x++;
            y--;
        }
        cout << x << " " << y <<endl;
    }else{
       int p = n/2; 
       int q = p+1;
       while(pcheck(p) || pcheck(q)){
           p--;
           q++;
       } 
       cout << p << " " << q <<endl;
    }
}

