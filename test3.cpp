#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int
using namespace std;

int n, k;
vector<bool> isBlack;
vector<vector<int>> arr;
vector<int> sel;
vector<int> ans;

void func(int pos)
{
    if (pos > n) {
        if (sel.size() > ans.size()) ans = sel;

        return;
    }

    bool check = true;
    for (int x : arr[pos]) {
        if (isBlack[x] == true) {
            check = false;
            break;
        }
    }

    if (check == true) {
        isBlack[pos] = true;
        sel.push_back(pos);
        func(pos + 1);

        isBlack[pos] = false;
        sel.pop_back();
        func(pos + 1);
    }
    else func(pos + 1);
}

void solve()
{   
    cin >> n >> k;

    isBlack.clear();
    isBlack.resize(n + 1, false);
    arr.clear();
    arr.resize(n + 1);
    for (int i = 1; i <= k; i++) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    
    sel.clear();
    ans.clear();
    func(1);
    
    cout << ans.size() << '\n';
    for (int x : ans) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;
}
