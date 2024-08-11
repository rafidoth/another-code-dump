
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



bool compare(string &s1,string &s2){
    return s1.size() > s2.size();
}
 

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    vector<string> v(N),v2(N);
    for(int i =0; i<N; i++){
        cin >> v[i];
    }
    v2 = v;
    sort(v.begin(),v.end(),compare);

    int mx = v[0].size();
    vector<string> ans(mx);
    reverse(v2.begin(), v2.end());

    for(int i = 0; i<N; i++){
        string x = v2[i];
        int current_sz = x.size();
        for(int j = 0;j < mx; j++){
            if( j >= current_sz){
                ans[j]+="*";
            }else{
                ans[j]+= x[j];
            }
        } 
    }
    vector<string> ans2;
   for(int i =0; i<mx;i++){
       string s = ans[i];
       int sz = ans[i].size();
       bool letter = false;
       int j = sz -1;
       for(; j > -1; j--){
            if(s[j] != '*'){
                letter = true;
                break;
            } 
       }
       for(; j < sz; j++){
            if(s[j] == '*') s[j] = ' ';
        }
        ans2.push_back(s);
   }


    for(int i =0; i<mx;i++){
        int sz = ans2[i].size();
        for(int j = 0; j < sz; j++){
            cout << ans2[i][j];
        }
        cout << endl;
    }
}
