
#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int lli;
#define MOD 1000000007



void func(){
    int n; 
    cin >> n;
    vector<int> digit_arr;
    string s = to_string(n);
    int len = s.length();
    for(char x : s){
        digit_arr.push_back((int)x -'0');
    }
    vector<pair<int,int>> ans;
    for(int a = 1; a<=10000; a++){
        int minb = max(1,len*a-5);
        int mxb = len*a;
        for(int b = minb; b<=10000 && b <= mxb; b++){
            int digits = len*a -b; 
            if(digits>6 || digits < 1) continue;
            lli x = (lli)n*a - b;
            if(x < 1) continue;
            lli y =0;

            for(int i = 0; i<digits;i++){
                y = y*10+ digit_arr[i%len] ; 
            }
            if(x == y) {
                ans.push_back(make_pair(a,b));
            }
        }
    }
    cout << ans.size() << endl;
    for(auto x:ans)cout << x.first << " " << x.second << endl;
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

