#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    i64 n, k;
    std::cin >> n >> k;
    
    i64 sum = n * (k + k + n - 1) / 2;
    i64 ans = sum;
    
    int lo = 0, hi = n;
    while (lo < hi) {
        i64 x = (lo + hi + 1) / 2;
        i64 s = x * (k + k + x - 1) / 2;
        if (s <= sum - s) {
            lo = x;
        } else {
            hi = x - 1;
        }
    }
    for (auto x : {lo, lo + 1}) {
        if (x > n) {
            continue;
        }
        i64 s = x * (k + k + x - 1) / 2;
        ans = std::min(ans, std::abs(s - (sum - s)));
    }
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
