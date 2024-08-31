
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void func(){
    int l,r;
    int L,R;
    cin >> l >> r;
    cin >> L >> R;
    int aLeft, aRight, bLeft, bRight;
    if(R>r){
        aLeft = l;
        aRight = r;
        bLeft = L;
        bRight = R;
    }else{
        aLeft = L;
        aRight = R;
        bLeft = l;
        bRight = r;
    }
    if(aRight < bLeft){
        /* cout <<"case1" << endl; */
        cout << 1 << endl;
        return;
    }


    if(bRight > aRight && bLeft < aLeft){
        /* cout <<"case2" << endl; */
        cout << aRight - aLeft + 2 << endl;
        return;
    }

    if(bRight == aRight && bLeft == aLeft){
        /* cout <<"case6" << endl; */
        cout << aRight - aLeft  << endl;
        return;
    }

    if(bLeft == aLeft){
        /* cout <<"case3" << endl; */
        int tmp = min(aRight, bRight);
        cout << tmp - bLeft+ 1 << endl;
        return;
    }

    if(bRight == aRight){
        int x = max(bLeft,aLeft);
        /* cout <<"case4" << endl; */
        cout << aRight - x + 1 << endl;
        return;
    }

    if(bLeft <= aRight && bLeft >= aLeft){
        /* cout <<"case5" << endl; */
        cout << aRight - bLeft +2 << endl;
        return;
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

