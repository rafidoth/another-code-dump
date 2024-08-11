
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007






int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    

    int q;
    cin >> q;
    set<int> keep;
    map<int,int> mp;
    while(q--){
        int n;
        cin >> n;
        if(n==1){
            int x;
            cin >> x;
            keep.insert(x);
            mp[x]++;
        }else if(n==2){
            int x;
            cin >> x;
            if(mp[x]==1) keep.erase(x);
            mp[x]--; 
        }else{
            cout << (int)keep.size() << endl;
        }
    }
}
