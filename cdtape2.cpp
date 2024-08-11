#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)


int N;
int k;
vector<int> arr;

int maxsum = 0;
void notsofun(){
    for(int i =0;i<k;i++){
        int sum = arr[i];
        for(int j  = i+1; j<k;j++){
            if(sum+arr[i]>N){
                if(sum> maxsum) {
                    maxsum = sum;
                }
            }else{
                sum += arr[i];
            }
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
    clock_t z = clock();
    while(cin >> N){
        cin >> k;
        int s = 0;
        for(int i =0;i<k;i++) {
            int x ;
            cin >> x;
            arr.push_back(x);
            s+=x;
        }
        if(s<=N){
            for(int x : arr) cout << x << " "; 
            cout << "sum:" << s <<endl;
            arr.clear();
            continue;
        }
        notsofun();
        cout << maxsum << endl;
    }
    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
}

