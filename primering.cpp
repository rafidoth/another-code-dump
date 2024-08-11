#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

// TLE 
bool checkPrime(int n){
    if(n%2==0) return false;
    for(int i = 3;i*i<=n;i+=2){
        if(n%i==0) return false; 
    }
    return true;
}

vector<vector<int>> ans;
vector<int> sel;
using ump = unordered_map<int,bool>;
void notfun(vector<int>arr,ump proc){
    if(sel.size()== arr.size()){
        if(sel[0]==1){
            int sz = sel.size();
            bool flag = true;
            for(int i =0; i< sz;i++){
                int x = sel[i] + sel[(i+1)%sz];
                if(!checkPrime(x)) flag = false; 
            }
            if(flag) ans.push_back(sel);
        }
        return;
    }
    for(int i:arr){
        if(!proc[i]){
            proc[i] = true;
            sel.push_back(i);
            notfun(arr,proc);
            proc[i]= false;
            sel.pop_back();
        }
    }
}





int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int in;
    while(cin >> in){
        vector<int> arr;
        for(int i = 1; i<=in;i++) arr.push_back(i);
        ump proc;
        notfun(arr,proc);
        for(int i = 0;i <(int) ans.size();i++){
            for(int j:ans[i]){
                cout << j << " "; 
            }
            cout << endl;
        }
        ans.clear();
    }
    

}

