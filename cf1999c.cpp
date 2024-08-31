
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n,s,m;
    cin >> n >> s >> m; 
    
    vector<int> l(n), r(n);
    for(int i =0; i<n;i++){
        cin >> l[i] >>  r[i];
    }
    
    for(int i =0; i<n;i++){
        int x = l[i];
        if(i==0 && x - s >=0){
            cout << "YES"<< endl;
            return;
        }else if(i>0&&  x - s >= r[i-1]){
            cout << "YES"<< endl;
            return;
        }
    }

    if(m-s >= r[n-1]){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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

