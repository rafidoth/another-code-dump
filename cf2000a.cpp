
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    string s;
    cin >> s;
    if(s[0] != '1' || s[1] != '0'){
        cout << "NO" << endl;
        return;
    }

    if(s[2] =='0'){
        cout << "NO" << endl;
        return;
    }
    
    int sz = s.size();
    if(s[2] =='1' && sz-1 == 2){
        cout << "NO" << endl;
        return;
    }

    if(sz <=2){cout << "NO" << endl; return;}
    cout << "YES" << endl;





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

