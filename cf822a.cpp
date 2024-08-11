#include<bits/stdc++.h> 
using namespace std;




long long int ans = 1;

void fact(int n){
    if(n==0)return;
    ans*= n;
    fact(n-1);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin >> a >> b;
    fact(min(a,b));
    cout << ans <<endl;
}

