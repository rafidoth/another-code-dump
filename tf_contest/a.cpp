
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007







int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  char x;
  cin >> x; 
  int s;
  cin >>s;
  string str; 
  cin >> str;
  
  int n= str.size();
  auto e = [&](string str1){
    for(int i=0; i<n;i++){
      char m = 'a'+((str[i] - 'a')+s)%26;
      str1[i] = m;
    }
    cout << str1 << endl;
  };

  auto d = [&](string str1){
    for(int i=0; i<n;i++){
      int q = ((str[i] - 'a')-s);
      char m ; 
      if(q<0) m= 'z'+q+1;
      else m = 'a'+ q;
      str1[i] = m;
    }
    cout << str1 << endl;
  };
  if(x=='E') e(str);
  else d(str); 
}
