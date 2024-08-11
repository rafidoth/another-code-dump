#include<bits/stdc++.h> 
using namespace std;



const int N = 1e7+2;
vector<long long int> primes;

bool is_prime[N+2];
void sieve(){
    is_prime[0] = 1;
    is_prime[1] = 1;
    for(int i = 3;i*i<=N;i+=2){
        if(!is_prime[i]){
            for(long long k = i*i; k<=N;k+=i){
                is_prime[k] = 1;
            }
        }
    }
}

bool p(int n){
    if(n==2) return true;
    if(n<2) return false;
    if(n%2==0) return false;
    return !is_prime[n];
}

vector<vector<int>> ans;
void fuck(){
    int x = 0;
    int y = 32000;
    //cout << "test " << ++t <<endl;
    vector<int> v;
    for(int i =x ; i<=y;i++){
        if(p(i)) v.push_back(i); 
    }
    /*
    for(int i: v) cout << i << " ";
    cout << endl;
    */
    int d = 0;
    int sz = v.size();
    vector<int> ans1, ans2;
    for(int i = 0; i< sz-2;i++){
        d = v[i+1] - v[i];
        int count = 0;
        int m = i+1;
        int n = i+2;
        if(n>=sz || m >= sz) break;
        while(v[n]-v[m]==d){
            count++;
            m++;
            n++;
            if(m+1 >= sz && n+1 >=  sz) break;
        }
        if(count >=1){
            ans1.clear();
            for(int g =i; g<n; g++){
                ans1.push_back(v[g]);
            }
            //int z1 = ans1.size();
            int z2 = ans2.size();
            bool flag = false;
            if(z2!=0){
                for(int z: ans2){
                    if(ans1.back()== z){
                         flag = true;
                         break;
                    }
                }
            }
            ans2 = ans1;
            if(flag) {
                continue;
            }
            ans.push_back(ans1);
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
    sieve();
    fuck();
    int a,b;
    while(cin >> a >> b){
        if(a==0 && b==0) break;
        int x = min(a,b);
        int y = max(a,b);
        for(int i =0;i<162;i++){
            if(ans[i][0]>= x && y >= ans[i].back()){
                for(int it =0; it<(int)ans[i].size();it++){
                    if(it==0) cout << ans[i][it];
                    else cout << " " << ans[i][it];
                }
                cout << endl;
            }
        }
    }
}

