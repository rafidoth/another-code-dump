
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i<n; i++) cin >> arr[i];
    int x = arr[n-1];
    for(int i = n-2; i >=0; i--){
        if(arr[i] > x) x = arr[i];
        else x++;
    }
    cout << x << "\n";
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

