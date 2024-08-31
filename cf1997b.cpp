
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n;
    cin >>n;
    char arr[2][n];
    for(int i =0;i <2; i++){
        for(int j = 0; j <n; j++){
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for(int i =1; i<n-1; i++){
        if(arr[0][i]=='.' && arr[0][i-1]=='.' && arr[0][i+1]=='.' && arr[1][i]=='.'){
            if(arr[1][i-1] =='x' && arr[1][i+1] =='x') ans++;
        }
    }
    for(int i =1; i<n-1; i++){
        if(arr[1][i]=='.' && arr[1][i-1]=='.' && arr[1][i+1]=='.' && arr[0][i]=='.'){
            if(arr[0][i-1] =='x' && arr[0][i+1] =='x') ans++;
        }
    }
    cout << ans << "\n";
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

