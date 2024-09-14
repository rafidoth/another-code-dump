
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


int fn(string num){
  int n = 0;
  for(char x : num){
     n = n*10 + (x -'0');
  }
  return n;
}

string str;
vector<int> sel;
bool f = false;
void funksion(int i,int cnt, vector<bool> taken , int mx){
  if(cnt == (int) str.size() && mx == (int)sel.size()){
    for(int x : sel)
      cout << x << ' ';
    f = true;
    return;
  }  
  if(f) return;
  string s = "";
  s+= str[i];
  if(s[0] =='0') return;
  int s1 = fn(s);
  if(s1>=1 && s1 <=50 && !taken[s1]){
    sel.push_back(s1);
    taken[s1] = true;
    funksion(i+1,cnt+1, taken, max(mx,s1));
    taken[s1] = false;
    sel.pop_back();
  } 
  s+=str[i+1];
  int s2 = fn(s);
  if(s2 >=1 && s2 <=50 && !taken[s2]){
    sel.push_back(s2);
    taken[s2] = true;
    funksion(i+2,cnt+2, taken, max(mx,s2));
    taken[s2] = false;
    sel.pop_back();
  } 
}


int main(){
  fastio();
  freopen("joke.in", "r", stdin);
  freopen("joke.out", "w", stdout);  
  cin >> str;
  vector<bool> taken(70,false);
  funksion(0, 0, taken, 0);
}





