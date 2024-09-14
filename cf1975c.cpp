
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int main(){
  int t;
  scanf("%d",&t);
  while (t--) {
    int n; 
    scanf("%d",&n);
    vector<int> arr(n);
    for(int i =0; i<n; i++) scanf("%d",&arr[i]);
    int mx = 0;
    for(int i =1; i<n; i++)
      mx = max(mx, min(arr[i],arr[i-1]));
    for(int i =0, k = 1, m = 2; i <n && k <n && m <n; i++,k++,m++)
      mx = max((arr[i]+arr[k]+arr[m])-(max(arr[i],max(arr[k],arr[m]))+ min(arr[i],min(arr[k],arr[m]))),mx);
    printf("%d\n",mx);
  }
}
