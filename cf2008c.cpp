
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
typedef unsigned long long int uli;
#define MOD 1000000007


int bs(int R){
    /* int s = 1; */
    /* int e = R; */
    /* while(s<=e){ */
    /*     int mid = (s+e)>>1; */
    /*     int nth_term = (mid-1)*(mid); */
    /*     nth_term/=2; */
    /*     nth_term++; */
    /*     int kth_term = (mid)*(mid+1); */
    /*     kth_term/=2; */
    /*     kth_term++; */
    /*     if(nth_term <=R && kth_term >R){ */
    /*         return mid; */
    /*     }else if(nth_term > R) e = mid-1; */
    /*     else if(nth_term <R && kth_term <R) s = mid+1; */
    /* } */
    for(int i = 1; i <=R; i++){
        uli nth_term = (i-1)*(i);
        nth_term/=2;
        nth_term++;
        uli kth_term = (i)*(i+1);
        kth_term/=2;
        kth_term++;
        /* cout << nth_term<< " " << kth_term << endl; */
        if(nth_term <=R && kth_term >R){
            return i;
        }
    }
    return -1;
}

void f(){
    int L,R;
    cin >> L >> R;
    cout << bs(R-L+1) << endl;
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

