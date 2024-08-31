#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> stk;
    string p = "";
    for(int i =0; i<n;i++){
        char ch = s[i];
        if(ch == '_' && stk.empty()){
            p+='(';
            stk.push_back('(');
        } 
        else if(ch == '_' && !stk.empty() && stk.back() =='('){
            stk.pop_back();
            p+=')';
        } 
        else{
            if(!stk.empty() && stk.back() =='('){
                if(ch == ')'){
                    stk.pop_back();
                } 
                else stk.push_back('(');
            }else{
                stk.push_back(ch);
            }
            p+=ch;
        } 
    }
    stk.clear();
    int cost = 0;
    for(int i = 0; i<n; i++){
        char ch = p[i];  
        if(ch=='('){
            cost-= (i+1);  
        }else{
            cost += (i+1); 
        }
    }
    cout << cost << "\n";
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

