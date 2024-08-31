#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007

void f() {
    string str; 
    cin >> str;
    int n = str.size();
    int mx_len = 0;
    int left = -1;
    int right = -1;
    for(int i=1; i<n;i++){
       if(str[i] == '1' && str[i-1] =='0'){
            int p = i; 
            while(str[p] == '1') p++; 
            int q = i-1;
            while(str[q]=='0') q--;
            int len = (p-i)+(i-1-q);
            if(len >  mx_len){
                mx_len = len; 
                left = q+1;
                right = p-1; 
            }
       }
    }
    if(left ==0 && right == n-1){
        cout << 1 << endl;
        return;
    }
    
    bool zF = false;
    bool oF = false;
    int c = 0;
    for(int i = 0; i<n;i++){
        if(i >= left && i <=right) continue;
        char x = str[i];
        if(x=='0' && !zF){
            zF = true;
            c++;
        }

        if(x=='1' && zF){
            zF = false;
        }

        if(x=='1' && !oF){
            oF = true;
            c++;
        }
         
        if(x=='0' && oF){
            oF = false;
        }
    }
    if(left == -1 && right == -1){
        cout <<  c<< "\n"; 
    }else{
        cout << c+1 << "\n";
    }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int testcase;
  cin >> testcase;

  for (int i = 1; i <= testcase; i++) {
    // cout << "Test Case No " << i << "\n";
    f();
  }
}
