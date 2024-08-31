
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int N;
    cin >>N;
    vector<int> arr(N);
    for(int i =0; i<N; i++){
        cin >> arr[i];
    }
    int m;
    cin >>m;
    for(int i =0; i<m;i++){
        string str;
        cin >> str; 
        int sz = str.size();
        if(sz!=N){
            cout << "NO" << endl;
            continue;
        }
    
        map<int,char> intmp;
        map<char,int> charmp;
        bool f = true;
        for(int k=0; k<N; k++){
            char x = str[k];
            int y = arr[k];
            if(intmp.count(y)==0)intmp[y] = x;
            if(charmp.count(x)==0)charmp[x] = y;
            if(intmp[y]!=x || charmp[x] != y){
                cout << "NO" << endl;
                f = false;
                break;
            }
        }
        if(f) cout << "YES" << endl;
    }


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

