
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)

struct p {
  int index;
  int prefixBalance;
  char bracket;
};

bool comp(const p& p1, const p& p2){ 
  if(p1.prefixBalance==p2.prefixBalance) return p1.index > p2.index;
  else return p1.prefixBalance < p2.prefixBalance;
}
int main() {
  fastio();
  string str;
  cin >> str;
  int n = str.size();
  str = '_' + str;

  vector<p> arr;
  int pBalance = 0;
  for (int i = 1; i <= n; i++) {
    p tmp;
    tmp.index = i;
    if (i != 1){
      if(str[i-1]=='(') pBalance++;
      else pBalance--;
    } 

    tmp.prefixBalance = pBalance;
    tmp.bracket = str[i];
    arr.push_back(tmp);
  }
  sort(arr.begin(), arr.end(), comp);
  for (int i = 0; i < n; i++) {
    p tmp = arr[i];
    cout << tmp.bracket;
    //cout << tmp.prefixBalance << " " << tmp.bracket << " " << tmp.index << endl;
  }
  cout <<'\n';
}
