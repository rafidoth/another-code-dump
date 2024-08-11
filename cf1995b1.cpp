#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



lli pw(int a, int n){
    if(n==0) return 1;
    lli res = pw(a,n/2);
    if(n%2 ==0) res *= res;
    else res = a*res*res;
    return res;
}




int focc(vector<int>& arr, int t){
    int s = 0;
    int e = arr.size()-1; 
    int ans = -1;
    while(s<=e){
        int m = s+(e-s)/2;
        if(arr[m] == t) {
            ans = m;
            if(m==0) return ans;
            if(m!=0 && arr[m-1] !=t){
                return ans;
            }
            e = m-1;
        }
        else if(t < arr[m]) e = m - 1;
        else s = m + 1;
    }
    return e; 
}

int locc(vector<int>& arr, int t){
    int s = 0;
    int e = arr.size()-1; 
    int ans = -1;
    while(s<=e){
        int m = s+(e-s)/2;
        if(arr[m] == t) {
            ans = m;
            if(m==(int)arr.size()-1) return ans;
            if(arr[m+1] !=t) return ans;
            s = m+1;
        }
        else if(t < arr[m]) e = m - 1;
        else s = m + 1;
    }
    return s; 
}

void soln(){
    int n;
    cin >>n ;
    lli m;
    cin >> m;
    vector<int> arr(n);
    int mx = arr[0];
    unordered_map<int,int> ump;
    for(int i =0; i<n;i++){
        cin >> arr[i];
        if(arr[i] > mx) mx = arr[i];
        ump[arr[i]]++;
    }

    if(n==1){
        if(arr[0] == m){
            cout << m << endl;
            return;
        }else{
            cout << 0 << endl;
            return;
        }
    }
    sort(arr.begin(), arr.end());
    for(int x : arr) cout << x << " ";
    cout << endl;
    bool valid = false;
    for(int i =1; i<n;i++){
        if(arr[i]-arr[i-1] <=1){valid = true; break;}
    }
    if(!valid){
        cout << mx << endl;
        return;
    }
    set<int> numset;
    for(int x : arr) numset.insert(x);
    vector<int> nums;
    for(auto x : numset) nums.push_back(x);
    int setsize = nums.size();
    int ans = 0;
    for(int i = 1 ; i < setsize; i++){
        int n1 = nums[i-1];
        int n2 = nums[i];
        cout << n1 << " " << n2<< endl;
        cout << " ---------------------"<< endl;
        vector<lli> v1,v2;
        for(int j = 0; j < ump[n1];j++){
            v1.push_back((lli)n1*(j+1));
        }
        /*
        cout << "v1 : " ;
        for(int x : v1) cout << x << " ";
        cout << endl;
        */

        for(int x=0; x < (int)v1.size();x++){
            if(v1[x] > m) continue;
            if(v1[x] > ans) ans = v1[x];
            for(int j = 0; j< ump[n2]; j++){
                lli temp=((lli)n2*(j+1))+v1[x] ;
                if(temp > m) continue;
                v2.push_back(temp);
            } 
        }
        cout << "v2 : " ;
        for(int x : v2) cout << x << " ";
        cout << endl;
        for(int x : v2){
            if(x>ans) ans = x;
        }
    }
    cout << ans << endl;
}




int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0;i<t;i++){
        cout << "test case : " << i+1 <<endl;
        soln();
    }
}

