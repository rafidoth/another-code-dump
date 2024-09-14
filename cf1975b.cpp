
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



const int N = 1e6+2;

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
  if(n%2==0) return false; 
  if(n<2) return false;
  return !is_prime[n];
}



int main(){
  int t;
  cin >> t;
  sieve();
  while(t--){
    int n;
    scanf("%d",&n);
    vector<int> arr(n);
    int mi = INT_MAX;
    for(int i =0; i<n; i++) scanf("%d",&arr[i]), mi = min(mi,arr[i]);
    vector<int> b;
    for(int i =0;i<n;i++) if(arr[i]%mi!=0) b.push_back(arr[i]);
    if((int) b.size() ==0 ) printf("Yes\n");
    else{
      int mi2 = INT_MAX;
      for(int x: b) mi2 = min(x,mi2);
      bool f = false;
      for(int x: b){
        if(x%mi2!=0){
          f = true;
        }
      }
      if(f) printf("No\n");
      else printf("Yes\n");
    }
  }

}
