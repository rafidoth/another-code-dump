
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
    string str;
    cin >> str;
    int e,z,p,c;
    int i = 0;
    for(char x : str){
      if(x=='e') e = i;
      else if(x=='z') z = i;
      else if(x=='p') p = i;
      else if(x=='c') c = i;
      i++;
    }
    if(c < p || c < z || c < e || p < z) cout <<"NO\n";
    else cout << "YES\n";
  }
}





