
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n; 
    cin >>n;
    vector<pair<int,int>> arr(n);
    for(int i = 0; i<n; i++){
        int x ,y;
        cin >> x >> y;
        arr[i] = make_pair(x,y);
    }

    int x1, y1, x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    lli maindist = (lli)(x2-x1)*(x2-x1) + (lli)(y2-y1)*(y2-y1);
    //cout << maindist <<"\n";
    for(int i =0; i<n; i++){
        int a,b;
        a = arr[i].first;
        b = arr[i].second;
        lli dist = (lli)(x2-a)*(x2-a) + (lli)(y2-b)*(y2-b);
        //cout << dist << "\n";
        if(dist <= maindist){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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

