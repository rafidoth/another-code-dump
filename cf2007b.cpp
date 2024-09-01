
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n,m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i =0 ; i <n;i++) cin >> arr[i];
    int mx = *max_element(arr.begin(),arr.end()); 
    for(int i =0; i<m; i++){
        char x;
        int a,b;
        cin >> x;
        cin >> a >> b;
        if(mx >=a && mx <=b){
            if(x=='+') mx++;
            else mx--;
        }
        cout << mx << " ";
    }
    cout << "\n";
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

