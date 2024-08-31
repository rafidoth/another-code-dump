
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    string newstr = "";
    bool f = true;
    for(char x : str){
        if(x=='0'&& f ){
            newstr+="0"; 
            f = false; 
        } 
        else if(x=='1'){
            newstr+= "1";
            f = true;
        } 
    }
    int one = 0;
    int zero = 0;
    for(char y : newstr){
        if(y== '0'){
            zero++;
        }else{
            one++;
        }
    }
    if(zero>=one) cout << "NO" << endl;
    else cout << "YES" << endl;
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
        func();
    }
}

