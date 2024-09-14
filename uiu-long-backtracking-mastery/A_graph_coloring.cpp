
#include<bits/stdc++.h> 
using namespace std;
#define MOD 1000000007

int mx = 0;
string max_sqn = "";
void f(int pos, string colored, int c, vector<int> g[], int n){
  if(pos>n){
    if(c > mx) mx = c, max_sqn = colored;
    return;
  } 
  // before putting B ensure that 
  // all of its adjacent vertices are White
  bool fl = true;
  for (int x : g[pos])
    if(colored[x] == 'B') {fl = false; break;} 

  if(fl){
    colored[pos] = 'B';
    f(pos+1,colored,c+1,g,n);
  } 

  colored[pos] = 'W';
  f(pos+1, colored,c, g, n);
}


int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,k;
    scanf("%d %d",&n,&k);
    vector<int> g[n+1];
    for(int i = 0; i<k; i++){
      int x,y;
      scanf("%d %d",&x,&y);
      g[x].push_back(y);
      g[y].push_back(x);
    } 
    string str = "_";
    for(int i =0; i<n; i++) str+='W';
    mx = 0;
    f(1,str,0,g,n);
    cout << mx << "\n";
    int cnt = 0;
    for(int i =1; i<=n; i++){
      if(max_sqn[i]=='B'){
        cnt++;
        if(cnt == mx) cout << i << '\n';
        else cout  <<  i << ' ';
      } 
    } 
  }
}
