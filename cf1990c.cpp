
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void mad(vector<int>& arr){
    map<int,int> mp;
    int ret = 0;
    int n = arr.size()-1;
    for(int i = 1; i <= n; i++){
        if(arr[i] == 0 ) continue;
        int x = ++mp[arr[i]];
        if(x >=2 ){
            ret = max(ret, arr[i]);
        }
        arr[i] = ret; 
    } 
}


bool zero(vector<int>& arr){
    for(int i = 1; i < (int)arr.size(); i++) if(arr[i] != 0) return false;
    return true;
}

int getsum(vector<int>& arr){
    int sum = 0;
    for(int i = 1; i < (int)arr.size(); i++) sum += arr[i];
    cout << sum << endl;
    return sum;
}

void soln(){
    // cout << "Test Case Starts here -----" << "\n";
    int n;
    cin >> n;
    vector<int> arr(n+1,-7);
    lli sum = 0;
    for(int i =1; i <= n; i++){
        cin >> arr[i];
        sum+= arr[i];
    } 
    mad(arr); 
    for(int i = 1; i <=n; i++) sum += arr[i];
    mad(arr);
    for(int i = 1; i<=n;i++){
        sum += (lli)(n- i +1 ) * arr[i];
    }
    cout << sum;
    cout << "\n";

}




int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t ;
    while(t--) soln();

}
