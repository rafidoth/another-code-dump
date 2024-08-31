
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

vector<int> arr(200008,0),presum(200008,0);

void func(){
    int left,right; 
    cin >> left >> right;
    int ans = presum[right] - presum[left-1]; 
    ans += arr[left];
     
    cout << ans << endl; 
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

    int pw = 0;
    lli b = 1;
    for(int i = 0;i<200008; i++){
        if(i/b!=0){
            b*=3;
            pw++;
            arr[i] = arr[i-1] +1;
        }else{
            if(i!=0) arr[i] = arr[i-1];
        } 
    }
    
    for(int i = 1; i<200008; i++){
        presum[i]= arr[i] + presum[i-1];
    }

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        func();
    }
}

