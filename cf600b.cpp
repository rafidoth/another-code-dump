
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



// greatest number less or equal to target
int bs_gnlet(vector<int>& array,int n, int x){
    int k = 0;
    for(int b = n/2; b>=1; b/=2){
        while(k+b <n && array[k+b]<=x) k+=b;
    }
    return k;
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a >> b ;
    vector<int> A(a), B(b);
    for(int i =0; i<a;i++) cin >> A[i];
    for(int i =0; i<b;i++) cin >> B[i];
    sort(A.begin(), A.end()); 
    for(int x : B){
        if(x < A[0]){
            cout << 0 << endl;
        }else if(x >= A[a-1]){
            cout << a << endl;
        }else{
            cout << bs_gnlet(A,a,x)+1<< endl;
        }
    }


}
