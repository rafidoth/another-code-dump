#include<bits/stdc++.h> 
using namespace std;

int lcm(int a , int b){
    long long int x = 1LL*a*b;
    return x/__gcd(a,b);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int tc;
    cin >> tc;
    while(tc--){
        int n ;
        cin >> n;
        for(int i = 0; i<n;i++){
            cout << i + 1 << " ";
        }
        cout <<endl;


    }
}

