
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
  int n;
  cin >> n;
  char arr[2][n+1];
  memset(arr,-1,sizeof(arr));
  for(int i =0; i<n; i++){
    int x,y;
    cin >> x >> y;
    arr[y][x] = 'x';
  }
  uli ans = 0;
  for(int i =0; i<=n; i++){
    if(arr[0][i] == arr[1][i] && arr[0][i]=='x'){
      ans+= (n-2);
    }
  }
  
  int i = 0; 
  int k = 2;
  for(; k<=n; i++,k++){
    if(arr[0][i]=='x' && arr[0][k]=='x' && arr[1][i+1]=='x') ans++;
  }

  i = 0; 
  k = 2;
  for(; k<=n; i++,k++){
    if(arr[1][i]=='x' && arr[1][k]=='x' && arr[0][i+1]=='x') ans++;
  }
  cout << ans << endl;
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

