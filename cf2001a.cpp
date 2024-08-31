
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i =0; i<n;i++) cin >> arr[i];
    map<int,int> mp;
    set<int> st;
    for(int x : arr){
        mp[x]++;
        st.insert(x);
    } 
    if((int)st.size()  == n) cout << n-1 << endl;
    else{
        int mx = 0;
        int f = 0;
        for(auto p : mp){
            if(p.second > f){
                f = p.second;
                mx = p.first;
            }
        }
        cout << n - f << endl;

    }



}



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        func();
    }
}

