
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



// greatest number less or equal to target
int gnlet(vector<int>& array,int n, int x){
    int k = 0;
    for(int b = n/2; b>=1; b/=2){
        while(k+b <n && array[k+b]<=x) k+=b;
    }
    return k+1;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >>n;
    vector<int> arr(n);
    for(int i =0; i <n; i++) cin >> arr[i];
    int x;
    cin >> x;
    vector<int> q(x);
    for(int i =0; i <x; i++) cin >> q[i];
    for(int i = 1; i<n;i++) arr[i]= arr[i-1] + arr[i];
    for(int y : q){
        auto up = lower_bound(arr.begin(),arr.end(),y);
        int indx = distance(arr.begin(), up);
        cout << indx+1 << endl;
    }
}
