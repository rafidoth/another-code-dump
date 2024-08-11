#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


int cnt_seq(string s){
    int m = s.size();
    int cnt = 0;
    for(int i = 1; i<m;i++){
        if(s[i]!= s[i-1]) cnt++;
    }
    return cnt+1;
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    //int t = 0;
    while(cin >> n){
        //cout << ++t << " no test case" <<endl; 
        string str;
        cin >> str;

        int ans = cnt_seq(str);
        for(int i =0;i<n;i++){
           string cpy= str;
           if(cpy[i] == '1') cpy[i] = '0';
           else cpy[i] = '1';
           int cnt  = cnt_seq(cpy);
           //cout << cpy << " " << cnt <<endl;
           ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
}

