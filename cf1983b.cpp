
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007



void f(){
    int n, L, R; 
    cin >> n >> L >> R;
    vector<int> arr(n);
    for(int i =0; i <n; i++) cin >> arr[i];
    
    int sum = 0;
    int i = 0;
    int j = 0;
    int c = 0;
    while(j < n){
        while(sum < L && i < n ){
            if(arr[i] >= L && arr[i] <=R) sum = arr[i];
            else sum += arr[i];
            i++;
        }
        if(sum >= L && sum <=R){
            c++;
            j = i ;
            sum = 0;
        }else{
            sum -= arr[j];
            j++;
        }
    }

    cout << c << endl;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int testcase; 
    cin >> testcase;

    for(int i = 1; i<=testcase; i++){
        //cout << "Test Case No " << i << "\n";
        f();
    }
}

