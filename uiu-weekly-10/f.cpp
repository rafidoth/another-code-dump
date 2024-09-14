
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

int fn(int x) { return (x * (x + 1)) / 2; }

int main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int extra = n; 
    int x = 25;
    char m = 'a';
    while(extra > x){
      int p = 0;
      int q = 0;
      while(p <= extra) p = fn(++q);
      p = fn(--q);
      extra -= p;
      int i;
      for(i =0; i<q; i++){
        cout << m; 
      }
      m++;
      x--;
    }
    for(int i =0; i<extra; i++){
      char ch = m+ i;
      cout << ch;
    }
    cout << '\n';
  }
}
