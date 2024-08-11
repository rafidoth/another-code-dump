#include<bits/stdc++.h> 
using namespace std;



int M;
int C;
vector<vector<int>> MAT;
vector<int> K;
bool dp[30][210];

void foo(){
    for(int x : MAT[0]){
        if(M-x >=0) dp[0][M-x] = true;
    }
    
    for(int g =1; g < C; g++){
        for(int b = 0; b < M; b++){
            if(dp[g-1][b]){
                for(int i =0; i < K[g]; i++){
                    int temp = b - MAT[g][i];
                    if(temp >=0) dp[g][temp] = true;
                }
            }
        }
    }
    
    int b = 0;
    for(;b<M && !dp[C-1][b]; b++);
    if(b==M+1) cout << "No Solution"<<endl;
    else cout << M -b << endl;
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
    foo();
}

