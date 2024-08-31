
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;
#define MOD 1000000007



void func(){
    int n,m,k;
    cin >> n >> m >> k;
    int p;
    cin >> p;
    vector<int> arr(p+1);
    for(int i =1; i<=p;i++){
        cin >> arr[i];
    }
    vector<int> rows(n+1);
    int curr = 0;
    for(int i = 1; i<=n;i++){
        if(i+(k-1) <=n){
            curr++;
        }
        if(i > k){
            curr--;
        }
        rows[i] = curr;
    }

    /* for(int x : rows) cout << x << " " ; */
    /* cout << endl; */
    
    vector<int> cols(m+1);
    curr = 0;
    for(int i = 1; i<=m;i++){
        if(i+(k-1) <=m){
            curr++;
        }
        if(i > k){
            curr--;
        }
        cols[i] = curr;
    }
    /* for(int x : cols) cout << x << " " ; */
    /* cout << endl; */
    vector<int> sums; 
    for(int i =1;i<=n; i++){
        for(int j = 1; j <= m; j++){
            sums.push_back(rows[i]*cols[j]); 
        }
    }
    sort(sums.begin(), sums.end(),greater<int>());
    sort(arr.begin(), arr.end(),greater<int>());
    /* cout << "sums ";  */
    /* for(int x : sums) cout << x << " "; */
    /* cout << endl; */
    /* cout << "arr " ; */
    /* for(int y: arr) cout << y << " "; */
    /* cout << endl; */

    ulli ans = 0;
    int q = arr.size();
    for(int i =0; i< q-1; i++){
        ulli x = arr[i];
        ulli y = sums[i];
        ans += (x*y);
    }
    cout << ans << endl;

}



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        func();
    }
}

