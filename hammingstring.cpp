#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007
int n,h;

void binfuc(int c, string sel){
    if((int)sel.size() == n){
        int count = 0;
        for(char x : sel) if(x== '1') count++;
        if(count == h) cout << sel <<endl;
        return;
    }
    sel+= "0";
    binfuc(c+1,sel);
    sel.pop_back();
    sel+="1";
    binfuc(c+1,sel);
    sel.pop_back();
}



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0;i < t; i++){
        if(i!=0) cout <<endl;
        cin >> n >> h;
        binfuc(0, "");
    }
}

