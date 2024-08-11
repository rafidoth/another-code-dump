
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void f(){
    int n;
    cin >> n;
    vector<int> arr(n);

    int ecount = 0;
    int ocount = 0;
    vector<int> evens,odds;
    
    int largest_odd = 1;
    for(int i =0; i<n;i++){
        cin >> arr[i];
        
        if(arr[i] %2 ==0){
            evens.push_back(arr[i]);
            ecount++;
        }else{
            if(arr[i]>largest_odd) largest_odd = arr[i];
            odds.push_back(arr[i]);
            ocount++;
        }
    }

    if(ecount ==  n || ocount == n){
        cout << 0 << endl;
        return;
    } 
   
    sort(evens.begin(), evens.end());
    int even_cnt  = evens.size();
    lli sum =  largest_odd; 
    for(int i = 0; i<even_cnt;i++ ){
        if(sum < evens[i]){
            cout << even_cnt + 1 << endl;
            return;
        }
        sum += evens[i];
    }
    cout << even_cnt << endl;
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
        f();
    }
}

