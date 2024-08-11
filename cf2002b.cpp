
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for(int i =0 ; i<n; i++) cin >> a[i];
    for(int i =0 ; i<n; i++) cin >> b[i];

    bool bobwin= true;
    for(int i =0; i<n;i++){
        if(a[i]!= b[i]){
            bobwin = false;
            break;
        }
    }

    if(!bobwin){
        bobwin = true;
        reverse(a.begin(), a.end());
        for(int i =0; i<n;i++){
            if(a[i]!=b[i]){
                bobwin= false;
                break;
            }
        }
    }

    if(bobwin) cout << "Bob" << endl;
    else cout << "Alice" << endl;
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

