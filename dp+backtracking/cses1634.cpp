
#include<bits/stdc++.h> 
#include <climits>
using namespace std;
typedef long long int lli;
#define MOD 1000000007


int min_coins= INT_MAX;

void f(int pos,int rem, int c, vector<int>& arr){
  if(rem==0){
    min_coins = min(min_coins,c); 
    return;
  }else if(pos == (int) arr.size()) return;
  else if(rem < 0 ) return;
  f(pos,rem-arr[pos],c+1,arr);
  f(pos+1,rem,c, arr);
}




int main(){
  int n,x; scanf("%d %d", &n, &x);
  vector<int> arr(n);
  for(int i =0; i<n; i++) scanf("%d",&arr[i]); 
  f(0,x,0,arr); 
  printf("%d\n",min_coins);
}
