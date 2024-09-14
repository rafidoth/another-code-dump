
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



int main(){
  fastio();
  
  int a,b,c;
  cin >> a >> b >> c;
  
  int x = 0;
  if(a<b) x+=a;
  else x+=b;

  if(x == b){
    x += (min(a+b, c) + min(a, c+b));
  }else{
    x += (min(a+b,c) + min(b,c+a));
  }
  cout << x <<'\n';
}





