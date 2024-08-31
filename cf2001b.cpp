
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >> n;
    if(n%2==0){
        cout << -1 << endl;
    }else{
        for(int i = n; i>=1; i-=2) cout << i << " ";
        for(int i = 2 ; i < n;i+=2) cout << i << " ";
        cout << endl;
    }

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        func();
    }
}

