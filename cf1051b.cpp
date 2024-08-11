#include<bits/stdc++.h> 
using namespace std;


typedef unsigned long long int ull;
void relativelyprimepair(){
    ull l,r;    
    cin >> l >> r;
    cout << "YES" << endl;
    for(ull i = l; i<=r;i+=2){
        cout << i << " " << i+1<< endl;
    }
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    relativelyprimepair();
}

