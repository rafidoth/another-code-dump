
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    if(ceil((double)sqrt(n))==floor((double)sqrt(n))){
        int x = sqrt(n);
        for(int i =2; i <=x-1; i++){
            for(int k = 2; k <=x-1; k++){
                int ind = ((i-1)*x+k);
                if(str[ind-1]!='0'){
                    cout <<"No" << "\n";
                    return;
                }
            }
        }
        cout << "Yes" << "\n";
    }else cout << "No" << "\n";
    

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

