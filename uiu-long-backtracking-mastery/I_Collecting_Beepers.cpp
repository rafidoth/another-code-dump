
#include<bits/stdc++.h> 
#include <climits>
#include <cstring>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int getDistance(pair<int,int> m1, pair<int,int> m2){
  return abs(m1.first - m2.first) + abs(m1.second - m2.second);
}

int n;
vector<pair<int,int>> x;
pair<int,int> initial;
int memory[12][10000];
int minPath;
void fn(int X, int path, vector<bool> taken, int c){
  if(c==n){
    minPath = min(minPath, path + getDistance(x[X], initial));
    return;
  }
  for(int i =1; i<=n; i++){
    int newPath = path +getDistance(x[X],x[i]);
    if(!taken[i] && ( newPath < minPath)){
      taken[i] = true;
      fn(i, newPath,taken,c+1);
      taken[i] = false;
    }
  } 
}


int main(){
  fastio();
  int t;  
  cin >> t;
  while(t--){
    pair<int,int>  total;
    cin >> total.first >> total.second;
    cin >> initial.first >> initial.second;
    cin >> n;
    x.resize(n+1);
    x[0] = initial;
    for(int i =1; i<=n; i++) 
      cin >> x[i].first >> x[i].second;
    vector<bool> taken(n+1,false);
    minPath = INT_MAX;
    fn(0,0,taken,0);
    cout << "The shortest path has length "<< minPath << '\n';
  }
}





