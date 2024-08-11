#include<bits/stdc++.h> 
using namespace std;


void solve(){
    int n,m,swmk;
    cin >> n >> m >> swmk;
    string str;
    cin >> str;
    
    int swm = 0;
    str = "L"+str+"L";
    int k;
    for(k = 0; k<n+2;k++){
        //cout << k << " -> now at this place" <<endl;
        char x = str[k];
        if(x== 'W'){
            swm++;
            continue;
        }
        if(x== 'C') break;
        bool f = false;
        if(x=='L'){
            for(int i = min(n+1,k+m); i>k; i--){
                //cout << "trying on " << i << endl;
                char y = str[i]; 
                if(y=='L'){
                    //cout << "jumped on " << i << endl;
                    k = i-1;
                    f = true;
                    break;
                }
            } 
            if(f) continue;
            for(int i = min(n+1,k+m); i>k; i--){
                char y = str[i]; 
                if(y=='W'){
                    //cout << "jumped on " << i << endl;
                    k = i-1;
                    f = true;
                    break;
                }
            } 
            if(!f) break;
        }
    }
    //cout << k << " " << swm <<" " << swmk<<endl;     
    if(k>n && swm<=swmk){
        cout << "YES" << "\n";
    }else cout << "NO" << "\n";
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
 //   int c= 0;
    while(t--){
//        cout << "test " << ++c << endl;
        solve();
    } 

}

