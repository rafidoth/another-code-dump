
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


#ifdef LOOOSER 
#define see(x) cerr << #x <<" "; _print(x); cerr << endl;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#else
#define see(x)
#endif 

int dp[100];
int f(int n){
  if(n==0) return 1;
  if(n<0) return 0;
  return f(n-1) + f(n-2) ;
}


int main(){
  fastio();
  int n = 3;
  int F[100];
  F[0] = F[1] = 1;
  for(int i = 2; i<=n; i++)
    F[i] = F[i-1] + F[i-2];
  cout << F[n] << '\n';
}
























