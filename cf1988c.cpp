
#include<bits/stdc++.h> 
using namespace std;
typedef unsigned long long int lli;
#define MOD 1000000007

bool getBit(lli x, int k){
    return (x&((lli)1<<k));
}

lli reverseBit(lli x, int k){
    return (x ^ ((lli)1 << k));
}

lli setBit1(lli x, int k){
   return (x | ((lli)1 << k));
}

lli setBit0(lli x, int k){
   return (x & ~((lli)1 << k));
}

void func(){
    lli n;
    cin >>n;
    set<lli> ans;
    int qnty = 1;

    lli curr = n;
    lli next = curr;
    for(int im = 0; im<64*64; im++){
        //string ops  = "";
        for(int i = 0; i<qnty && i <64; i++){
            if(getBit(curr,i)){
                next = reverseBit(next,i);
                /* ops+= 'R'; */
            } 
            else{
                if(getBit(n,i)){
                    next = setBit1(next,i);
                    /* ops+='O'; */
                }else{
                    next = setBit0(next,i);
                    /* ops+='Z'; */
                }
            }
        }
        /* cout << ops << endl; */
        /* cout << curr << "->>>>" << next << endl; */
        if(next > curr || next == 0){
            qnty++;
            continue;
        } 
        ans.insert(next);
        curr = next;
        qnty++;
    } 
    ans.insert(n);
    cout << ans.size() << endl;
    for(lli x : ans) cout << x << " ";
    cout << endl;
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
        /* cout << "Test Case No " << i << "\n"; */
        func();
    }
}

