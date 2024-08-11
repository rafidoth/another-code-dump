#include<bits/stdc++.h> 
using namespace std;
const int N = 1e6+2;
vector<unsigned long long int> primes;
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
// worst case 10^5 operations -> O(n)
bool check(vector<unsigned long long int>& arr,int n){
   bool res = true;
   for(unsigned long long int x : arr){
       if(x%n!=0){
           res = false;
           break;
       }
   } 
   return res;
}


int numofdivisors(unsigned long long int n){
    int count = 1;
    for(int prime : primes){
        if((unsigned long long int)prime*prime > n) break;
        if(n%prime==0){
            int pw = 0;
            while(n%prime==0){
                n/= prime;            
                pw++;
            }
            count *= (pw+1);    
        }
    }
    if(n>1) count *= 2; 
    return count; 
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
    vector<unsigned long long int> arr(n);
    bool f = true;
    unsigned long long int mxele = 0;
    for(int i = 0; i <n;i++) {
        cin >> arr[i];
        if(i>=1 && arr[i] != arr[i-1] && f) f = false;
        if(arr[i]>mxele) mxele = arr[i]; 
    }
    if(f){
        // if all elements are same
        cout << numofdivisors(arr[0]) << "\n";   
    }else{
        long long int ans = 1;
        for(int pr : primes){
            if(1LL*pr*pr > mxele) break;
            int pw = 0;
            while(check(arr,pr)){
                for(int i = 0; i <n;i++){
                    arr[i] /= pr;
                } 
                pw++;

            }
            ans*= (long long int)(pw+1);
        } 
        //for(long long int x : arr) cout << x << endl;
        cout << ans << endl;
    }
        
}

