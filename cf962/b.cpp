#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void soln(){
    int n, k;
    cin >> n >> k;
    vector<string> mat(n);
    for(int i =0; i<n;i++) cin >> mat[i];

    vector<string> ans;
    for(int i = 0; i<n;i+=k){
        string row = "";
        for(int i2 = 0; i2<n;i2+=k){
            if(mat[i][i2] == '0') row+= "0";
            else row+="1";
        }
        ans.push_back(row);
    }
    for(string x : ans) cout << x << endl;
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        soln();
    }

}

