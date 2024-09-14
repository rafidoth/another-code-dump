
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



int main(){
  fastio();
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i =0; i<n ;i++) cin >> arr[i];
    if(n==1) cout << 0 << '\n';
    else {
      sort(arr.begin(),arr.end());
      cout << abs(arr[0] - arr[n-1]) << '\n';
    }
  }
}





