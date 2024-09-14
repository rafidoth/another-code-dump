
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007
#define cini(x) scanf("%d",&x)
#define cinii(x,y) scanf("%d %d",&x,&y)
#define couti(x) printf("%d",x)
#define coutii(x,y) printf("%d %d",x,y)





int main(){
  int t;
  cin >> t;
  while(t--){
    int p,q;
    cin >> p >> q;
    string arr[p];
    string b[p];
    for(int i =0; i<p; i++){
      cin >> arr[i];
    }
    for(int i =0; i<p; i++){
      string str = arr[i];
      for(int k = 0; k < q; k++){
        cout << str[k] << " " ;
      }
      cout << endl;
    }
  }
}
