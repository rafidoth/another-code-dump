#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007






int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc; cin >> tc;
    while(tc--){
        int n,m;
        cin >> n >> m;
        int mat[n][m];
        for(int i =0 ;i<n;i++){
            for(int j = 0; j< m;j++){
               cin >> mat[i][j]; 
            }
        }

        for(int i =0 ;i<n;i++){
            for(int j = 0; j< m;j++){
                int x = mat[i][j];
                int maximum_neighbour= 0; 
                int cnt = 0;
                if(i!=0 && mat[i-1][j]< x){
                    maximum_neighbour = max(maximum_neighbour,mat[i-1][j]);
                    cnt++;
                }
                if(i==0) cnt++;
                if(i!=n-1 && mat[i+1][j]<x){
                    maximum_neighbour = max(maximum_neighbour, mat[i+1][j]); 
                    cnt++;
                }
                if(i==n-1) cnt++;
                if(j!=0 && mat[i][j-1]<x) {
                    maximum_neighbour = max(maximum_neighbour, mat[i][j-1]);
                    cnt++;
                }
                if(j==0) cnt++;
                if(j!=m-1 && mat[i][j+1]<x) {
                    maximum_neighbour = max(maximum_neighbour, mat[i][j+1]);
                    cnt++;
                }
                if(j==m-1) cnt++;
                if(cnt == 4){
                    mat[i][j] = maximum_neighbour;
                }
            }
        }
        

        for(int i =0 ;i<n;i++){
            for(int j = 0; j< m;j++){
                cout << mat[i][j]<<" ";
            }
            cout << endl;
        }
        
    }
}

