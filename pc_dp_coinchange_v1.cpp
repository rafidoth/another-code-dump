#include<bits/stdc++.h> 
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n = 15;    
    vector<int> coins = {4,7,10};
    
    bool store[n+5];
    int c = coins.size();
    for(int i = 0; i<c;i++){
        store[n-coins[i]] = true;
    }
    
    for(int i = 0; i<c; i++){
        
    }
}

