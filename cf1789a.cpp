#include<bits/stdc++.h> 
using namespace std;




void mocha(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i =0; i <n;i++){
        for(int j = i+1; j < n;j++){
            if(__gcd(arr[i],arr[j]) <=2){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
    while(t--) mocha();
}

