#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >>tc;
    while(tc--){
        int n;
        cin >> n;
        if(n==1) cout << 9<<endl;
        else if (n==2) cout << 98 <<endl;
        else {
            cout << 989;
            int x = (n-3)%10;
            int p = (n-3)/10;
            for(int i =0;i<p;i++) cout << "0123456789";
            for(int i = 0;i<x;i++) cout << i ;
            cout <<endl;
        }
    }
}
