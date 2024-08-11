#include<bits/stdc++.h> 
using namespace std;


//const int N =100000000;

bool is_prime[100000002];
// 1 not prime
// 0 prime
int cnt = 1;// only 2 initially
void sieve(int N){
    is_prime[0] = 1;
    is_prime[1] = 1;
    for(int i = 3;i*i<=N;i+=2){
        if(!is_prime[i]){
            //cout << i << " ";
            cnt++;
            for(long long k = i*i; k<=N;k+=i){
                is_prime[k] = 1;
            }
        }
    }
    int i;
    int z = sqrt(N);
    if(z%2==0) i = z+1;
    else i = z;
    for(;i <=N;i+=2){
        if(!is_prime[i]){
            //cout << i << " " ;
            cnt++;
        }
    }
    cout << cnt <<endl;
}





int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;   
    cin >> n >> q;
    sieve(n); 
    while(q--){
        int x; 
        cin >> x;
        if(x==2) cout << 1 <<endl;
        else if (x%2 ==0) cout << 0 <<endl;
        else cout << !is_prime[x] <<endl;
    }
}

