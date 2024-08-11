#include<bits/stdc++.h> 
using namespace std;



int M;
int C;
vector<vector<int>> MAT;
vector<int> K;
vector<int> sel;
int memo[30][210];

int foo(int g,int b){
    if(b<0) return -1e7;
    if(g == C){
        for(int x : sel) {
            cout << x << " ";
        };
        cout << " : spent= " << M-b<<endl;
        return M - b;
    } 
    if(memo[g][b] != -1) return memo[g][b];
    int ans = -1;
    for(int i = 0 ; i < K[g]; i++){
        b -= MAT[g][i];
        sel.push_back(MAT[g][i]);
        ans = max(foo(g+1,b), ans);
        sel.pop_back();
        b+= MAT[g][i];
    }
    return memo[g][b] = ans;
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> M >> C;
    vector<vector<int>> mat(C);
    vector<int> k(C);
    for(int i = 0; i < C; i++) cin >> k[i];
    for(int i = 0; i < C;i++){
        vector<int> g(k[i]); 
        for(int a = 0 ; a < k[i]; a++){
            cin >> g[a];
        }
        mat[i] = g;
    }
    K = k;
    MAT = mat;
    for(int i = 0; i<30; i++){
        for(int j = 0 ; j < 210;j++){
            memo[i][j] = -1;
        }
    }
    cout << foo(0,M)<< endl;
}

