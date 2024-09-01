
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    string str;
    cin >> str;
    //cout << str[0] << " " << str.back() << endl;
    if(str[0]=='1' && str.back()!='9'){
        for(int i =1; i <(int)str.size()-1; i++){
            if(str[i]=='0'){
                cout << "NO"<< "\n";
                return;
            }
        }
        cout << "YES" <<"\n";
    }else cout << "NO" << "\n";

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

