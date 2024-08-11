#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e6;
vector<ll> prime;
bool vis[1000000];
 
ll divCount(ll &n){
    ll ans=1;
    for(ll i=0;i<prime.size() && prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            ll cnt=1;
            while(n%prime[i]==0){
                cnt++;
                n/=prime[i];
 
            }
            ans=ans*cnt;
        }
    }
    if(n>1){
        ans=ans*2;
    }
    return ans;
}
 
void sieve(){
    for(ll i=3;i*i<=N;i+=2){
        if(vis[i]==0){
            for(ll j=i*i;j<=N;j+=2*i){
                vis[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(ll i=3;i<=N;i+=2){
        if(vis[i]==0) prime.push_back(i);
    }
 
}
 
int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    sieve();
    int i=1;
    ll t,n;
    scanf("%lld",&t);
    while(t--){
 
        scanf("%lld",&n);
        printf("Case %d: %lld\n",i++,divCount(n)-1);
    }
    return 0;
}
