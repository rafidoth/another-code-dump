#include<bits/stdc++.h> 
using namespace std;



bool primechk(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i = 3; i*i<= n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(primechk(n-2)) cout << 2 << " " << n-2<<endl;
    else cout << -1 << endl;
}

