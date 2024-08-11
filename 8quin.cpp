#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

using vi = vector<int>;
vi sel;
vector<vi> ans;
bool taken[10];
int N;
int ir;
int ic;
// row check -> sel arr index
// col check -> permutation
// diag. check -> 
int soln_count = 0;

void notsofun(){
   if((int)sel.size() == N){
       soln_count++;
       if(soln_count<10) cout<<" ";
       cout << soln_count << "     ";
       /*
       map<int,int> mp;
       for(int i = 0; i<N;i++) mp[sel[i]] = i;
       for(auto pair:mp) cout << pair.second+1 << " ";
       */
       for(int x : sel) cout << " "<< x+1;
       cout << endl;
       return;
   }

   for(int i = 0;i<N;i++){
       if(!taken[i]){
           int p = sel.size();
           if(p==ir&& i!= ic) continue;
           if(p>0){
               bool flag = false;
               for(int h=0;h<p;h++) {
                   int r1 = h;
                   int c1 = sel[h];
                   int r2 = p; 
                   int c2 = i;
                   if(abs(r1-r2) == abs(c1-c2)){
                       flag = true;
                       break;
                   }
               }
               if(flag){
                   continue;
               }
           }     
           sel.push_back(i);
           taken[i] = true;
           notsofun();
           sel.pop_back();
           taken[i] = false;
       }
   }
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ; cin>> t;

    for(int i =0; i<t;i++){        
        if(i!=0) cout <<endl;
        cout << "SOLN       COLUMN"<<endl;
        cout << " #      1 2 3 4 5 6 7 8"<<endl;
        cout <<endl;
        N = 8;
        cin >> ic >> ir;
        ir--;
        ic--;
        notsofun(); 
        soln_count=0;
    }
    

}

