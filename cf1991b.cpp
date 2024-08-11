
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

bool bit(int n, int k){
    return (n & (1 << (k-1)));
}

void func(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i = 1; i<=n-1;i++){
        cin >> b[i];
    }
    vector<int> a;
    a.push_back(b[1]);

    for(int i = 1; i<=n-1;i++){
        int x = a[i-1];
        int y = 0;
        if(i!=n-1){
            y = b[i+1];
        }
        for(int it = 1; it <=32; it++){
            if(!bit(y,it)){
                if(bit(x,it) && bit(b[i],it)){
                    y = y ^ (1 << (it-1));         
                }
                else if(!bit(x,it) && bit(b[i],it)){
                    cout << -1 << "\n";
                    return;
                }
            }else{
                if(bit(x,it) && !bit(b[i],it)){
                    cout << -1 << endl;
                    return;
                }
            }
        }
        a.push_back(y);
    }
    for(int i : a) cout << i << " ";
    cout << "\n";
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

