#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


const int N = 1e8+2;
vector<int> primes;
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

bool p(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;
    return !is_prime[n];
}

int getLD(int n){
    for(int i = 2; i*i <=n; i++){
        if(n%i==0){
            return n/i;
        }
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve(); 

    int n;
    cin >> n;
    vector<int> arr(2*n);
    map<int,int> mp;

    for(int i = 0; i <2*n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    
    sort(arr.begin(), arr.end(),greater<int>());
    vector<int> ans; 

    for(int i =0; i<2*n; i++){
        int x = arr[i];
        //cout << x<< "is in process " << endl;
        if(p(x)){
            if(mp[primes[x-1]] >0 && mp[x]>0){
                //cout << x << " -> " << primes[x-1]<< endl;
                ans.push_back(x); 
                mp[x]--;
                mp[primes[x-1]]--;
            }
        }else{
            int LD = getLD(x);
            if(mp[LD] > 0 && mp[x]>0){
                //cout << x << " -> " << LD << endl;
                ans.push_back(x); 
                mp[LD]--;
                mp[x]--;
            }
        }

    }

    for(int i : ans) cout << i << " ";
    cout << endl;

}
