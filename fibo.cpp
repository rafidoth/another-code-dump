
#include<bits/stdc++.h> 
#include <cstdint>
using namespace std;
typedef long long int lli;
#define MOD 1000000007
#define MAX 10003

int saved[MAX];

int64_t f(int64_t n){
  if(n==1) return 1;
  if(n==0) return 1;
  if(saved[n]
  return f(n-1) + f(n-2);
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i= 1; i<=30; i++) cout << f(i) << endl;
}
