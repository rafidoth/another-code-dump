
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n,k;
  cin >>n >> k;

  vector<int> arr(n);
  for(int i=0;i<n;i++) cin >> arr[i];
  sort(arr.begin(),arr.end());
  reverse(arr.begin(),arr.end());
  lli sum  = 0;
  for(int i=0;i<k; i++) sum+= arr[i];
  cout << sum << endl;
}
