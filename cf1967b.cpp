
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
  int n;
  cin >> n;
  vector<int> a(n),b(n+1);
  for(int i =0; i<n; i++) cin >> a[i];
  for(int i = 0; i<n+1; i++) cin >> b[i]; 
  int64_t min_ops= 0;
  bool f = false;
  int p = INT_MAX;
  int q = -1;
  for(int i =0; i<n; i++){
    if(b[n] >= a[i] && b[n] <= b[i]) f = true;
    if(b[n] <= a[i] && b[n] >= b[i]) f = true;
    if(abs(b[n]-b[i])<p) p = abs(b[n]-b[i]), q = b[i];
    if(abs(b[n]-a[i])<p) p = abs(b[n]-a[i]), q = a[i];
    min_ops += abs(a[i]-b[i]);
  }
  min_ops++; 
  if(!f && q!=-1) min_ops+=abs(b[n]-q);
  cout << min_ops << endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

