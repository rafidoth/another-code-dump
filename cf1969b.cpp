#include<bits/stdc++.h> 
using namespace std;
#define MOD 1000000007






int main(){
  int t;  
  cin >> t;
  while(t--){
    string str;
    cin >> str;
    int n = str.size();
    int ones = 0;
    int i =0;
    long long int ans =0;
    while( i < n){
      if(ones ==0  && str[i] =='0') {i++;continue;}
      if(str[i]=='1') { i++; ones++; continue;}
      if(str[i]=='0') { i++; ans += (ones+1); continue;}
    }
    cout << ans << '\n';
  }
}
