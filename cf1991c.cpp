
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i =0; i <n; i++) cin >> arr[i];
    if(n==1){
        cout << 1 << endl;
        cout << arr[0] << endl;
        return;
    }
    for(int i = 1; i<n;i++){
        if(arr[i]%2 ==0 && arr[i-1] %2 !=0){
            cout << -1 << endl;
            return;
        }
        if(arr[i]%2!=0 && arr[i-1] %2 ==0){
            cout << -1 << endl;
            return;
        }
    }      
    vector<int> ans; 
    int ops= 0;
    if(arr[0]%2!=0){
        for(int i =0; i<n;i++){
            arr[i]--;  
        }
        ans.push_back(1);
    } 
    for(int op = 0;op <40; op++){
        sort(arr.begin(), arr.end());
        int x = arr.back();
        if(x==0) break;
        if(x!=1) x/=2;
        for(int i = 0; i<n;i++){
            if(arr[i] < x) arr[i] = x - arr[i];
            else arr[i] = arr[i] - x;
        } 
        ans.push_back(x);
    }
    if(ans.size()>40){
        cout << -1 << endl;
        return;
    }
    cout << ans.size() << endl;
    for(int x : ans){
        cout << x << " ";
    } 
    cout << endl;

}



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        func();
    }
}

