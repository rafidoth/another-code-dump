
#include<bits/stdc++.h> 
#include <numeric>
using namespace std;
typedef long long int lli;
#define MOD 1000000007


int min_wd=INT_MAX;
int tw = 0;
void f(int pos, int pile1,vector<int>& arr){
  if(pos== (int)arr.size()) return;
  min_wd = min(min_wd, abs(tw -2*pile1));
  f(pos+1,pile1+arr[pos], arr);
  f(pos+1,pile1, arr);
}


int main(){
  int n;
  scanf("%d",&n);
  vector<int> w(n);
  for(int i=0; i<n; i++) scanf("%d",&w[i]);
  tw = accumulate(w.begin(),w.end(),0);
  f(0,0,w);
  printf("%d\n",min_wd);
}
