#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007


void f() {
  int n;
  cin >> n;
  vector<int> k(n);
  uli lcm = 1;
  for (int i = 1; i <= n; i++) {
    cin >> k[i];
    lcm = ((uli)k[i] * lcm) / __gcd((uli)k[i], lcm);
  }
  vector<int> x(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    x[i] = lcm / k[i];
    sum += x[i];
  }
  if (sum >= lcm)
    cout << -1 << "\n";
  else {
    for (int i : x)
      cout << i << " ";
    cout << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int testcase;
  cin >> testcase;

  for (int i = 1; i <= testcase; i++) {
    // cout << "Test Case No " << i << "\n";
    f();
  }
}
