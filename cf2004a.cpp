
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n;i++) cin >> arr[i];
    set<int> st;
    for(int x: arr) st.insert(x);
    if((int)st.size()==2){
        auto itf = st.begin();
        auto itl = st.end() ;
        itl--;
        if(*itl - *itf > 1){
            cout <<"YES" << endl;
            return;
        } 
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

