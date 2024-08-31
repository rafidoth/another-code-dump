
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    vector<int> sn(2), sv(2);
    cin >> sn[0] >> sn[1] >> sv[0] >> sv[1];
    int ans = 0;
    for(int i =0; i<2; i++){
        int x = sn[i];
        for(int j =0; j<2; j++){
            int y = sv[j];   
            for(int k =0; k<2; k++){
                if(k==i) continue;
                int q = sn[k];
                for(int m =0; m<2; m++){
                    if(j ==m) continue; 
                    int p = sv[m];
                    //cout << x << " "<< y << endl;
                    //cout << q << " " << p << endl;
                    //cout << endl;
                    if(x>y){
                        if(q>=p) ans++;
                    }else if(x==y){
                        if(q>p) ans++;
                    }
                }
            }
        }
    }
    cout << ans << endl;
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

