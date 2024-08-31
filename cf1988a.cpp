
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n,k;
    cin >> n >> k;

    if(n==1) cout << 0 << endl;
    else if (n <=k) cout << 1 << endl;
    else{
        int x = 0;
        while(n>1){
            n-= (k-1);
            x++;
        }
        cout << x << endl;
    }
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

