#include<cstdio>
#include<vector>
 
using namespace std;
 
int N, M, best;
int tracks[30];
vector<int> bestpath;
 
void dfs(vector<int> path, int sum, int n) {
    sum += tracks[n];
    path.push_back(tracks[n]);
    for(int x=0;x<(int)path.size();x++) printf("%d ",path[x]);
    printf("\n");
    if(sum > best || (sum == best && path.size() > bestpath.size())) {
        best = sum;
        bestpath = path;
    }
    for(int i = n + 1; i < M; i++) {
        if(sum + tracks[i] <= N)
            dfs(path, sum, i);
    }
}
 
int main() {
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif 
    while(scanf("%d %d", &N, &M) == 2) {
        for(int i = 0; i < M; i++)
            scanf("%d", &tracks[i]);
        best = 0;
        for(int i = 0; i < M; i++) {
            vector<int> path;
            dfs(path, 0, i);

        }
 
        for(int j = 0; j < bestpath.size(); j++)
            printf("%d ", bestpath[j]);
        printf("sum:%d\n", best);
    }
}
