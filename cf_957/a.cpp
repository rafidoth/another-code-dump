#include<bits/stdc++.h> 
using namespace std;





int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int ans = 0;
        vector<vector<int>> all;
        all.push_back({a,b,c});
        all.push_back({a,c,b});
        all.push_back({b,a,c});
        all.push_back({b,c,a});
        all.push_back({c,a,b});
        all.push_back({c,b,a});
        for(auto x : all){
            vector<int> arr = x;
            arr[0]+=5;
            ans = max(ans,arr[0]*arr[1]*arr[2]);
        }
        
        for(auto x : all){
            vector<int> arr = x;
            arr[0]+=2;
            arr[1]+=2;
            arr[2]+=1;
            ans = max(ans,arr[0]*arr[1]*arr[2]);
        }
        for(auto x : all){
            vector<int> arr = x;
            arr[0]+=2;
            arr[1]+=3;
            ans = max(ans,arr[0]*arr[1]*arr[2]);
        }
        for(auto x : all){
            vector<int> arr = x;
            arr[0]+=4;
            arr[1]+=1;
            ans = max(ans,arr[0]*arr[1]*arr[2]);
        }
        for(auto x : all){
            vector<int> arr = x;
            arr[0]+=1;
            arr[1]+=1;
            arr[2]+=3;
            ans = max(ans,arr[0]*arr[1]*arr[2]);
        }
        cout << ans<<endl;
    }
}

