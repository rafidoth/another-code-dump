
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void f(){
    int x,y,k;
    cin >> x >> y >> k;
    int xk = x * k; // max 
    int yk = y * k;
    int n = k;
    vector<int> X,Y;
    if(k%2==0){
        if(xk==0 && yk ==0){
            X.push_back(-1);
            X.push_back(1);
            Y.push_back(-1);
            Y.push_back(+1);

        }else{
            X.push_back(0);
            X.push_back(xk );
            Y.push_back(0);
            Y.push_back(yk );
        }
        k-=2;
    }else{
        X.push_back(xk);
        Y.push_back(yk);
        k--;
    }

    for(int i =0; i<k; i+=2){
        X.push_back(xk+5+i);
        X.push_back(-xk-5-i);
        Y.push_back(yk+5+i);
        Y.push_back(-yk-5-i);
    }
    
    for(int i =0; i<n;i++){
        cout << X[i] << " " << Y[i]<< endl;
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
        f();
    }
}

