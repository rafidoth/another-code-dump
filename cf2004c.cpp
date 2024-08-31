
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int n,k; 
    cin >> n >> k; 

    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin >> arr[i] ;
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i = 1; i <n; i+=2){
        int x = arr[i-1] - arr[i];
        if(x <= k){
            k-= (x);
            arr[i]+= x;
        }else{
            arr[i]+= k;
            break;
        }
    }
    lli A = 0;
    lli B = 0;
    for(int i = 0; i <n; i++){
        if(i%2==0) A+=arr[i];
        else B+=arr[i];  
    }

    cout << A - B << endl;
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

