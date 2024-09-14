
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = 7;
  int k = 2;
  auto sum = [&](int a, int n) { 
    return a * n + n * (n - 1) / 2; 
  };

  int total = sum(k, n);

  auto getpmq = [&](int i) { 
    return 2 * sum(k, i + 1) - total;
  };
  cout << getpmq(4) << endl;
}
