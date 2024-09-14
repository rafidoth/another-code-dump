
#include<bits/stdc++.h> 
using namespace std;
#define MOD 1000000007



void f(){
  int x;
  cin >> x;
  vector<int> v;
  for(int i =0; i<31; i++){
    if(x&(1<<i)) v.push_back(1);
    else v.push_back(0);
  }
  for(int i =1; i<32; i++){
    if(v[i-1] == 1 && v[i]==1){
      v[i-1] = -1;
      while(v[i]==1) {
        v[i] = 0;
        i++;
      } 
      v[i]=1;
    }
  }
  int r;
  for(r = 30; r>-1; r--) if(v[r]==1) break; 
  cout << r+1 << '\n';
  for(int l=0; l <=r; l++) cout << v[l] << " "; 
  cout << '\n';
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

