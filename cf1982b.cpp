
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int x,y,k;
    cin >> x >> y >> k;

    while(k>0){
        int m = min(k,y - (x%y));
        k-= m;
        x+= m;
        while(x%y==0) x/=y;
        if(x==1) break;
    }
    if(x==1 && k>0){
        k%=(y-1); 
        x+=k;
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

