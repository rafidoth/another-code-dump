
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007


int binarysearch(vector<int>& array,int n, int x){
    int k = 0;
    for(int b = n/2; b>=1; b/=2){
        while(k+b <n && array[k+b]<=x) k+=b;
    }
    return k;
}

void f(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i = 0; i<n;i++) cin >> array[i];
    sort(array.begin(), array.end());
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(x < array[0]){
            cout << 0 << endl;
        }else if(x >= array[n-1]){
            cout << n << endl;
        }else{
            cout << binarysearch(array,n,x)+1 << endl;
        }
    }
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    testcase = 1;
    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

