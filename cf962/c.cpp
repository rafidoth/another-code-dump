#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void soln(){
    int n,q;
    string A,B;
    cin >> n >> q;
    cin >> A >> B;

    vector<vector<int>> pre1(n,vector<int> (26,0));
    vector<vector<int>> pre2(n,vector<int> (26,0));
    vector<int> temp(26,0);

    for(int i = 0; i<n;i++){
        char x = A[i] - 'a';
        if(i==0){
            temp[x]++;
            for(int m = 0; m<26;m++){
                pre1[i][m] = temp[m];  
            }
            continue;
        } 
        temp[x]++;
        for(int m = 0; m<26;m++){
            pre1[i][m] = temp[m];  
        }
    }
    for(int i = 0; i<26;i++) temp[i] = 0;
    for(int i = 0; i<n;i++){
        char x = B[i] - 'a';
        if(i==0){
            temp[x]++;
            for(int m = 0; m<26;m++){
                pre2[i][m] = temp[m];  
            }
            continue;
        } 
        temp[x]++;
        for(int m = 0; m<26;m++){
            pre2[i][m] = temp[m];  
        }
    }

    /* int i = 0;  */
    /* for(auto x : pre2){ */
    /*     cout << "state " << i << endl; */
    /*     i++; */
    /*     for(int k = 0; k < 26; k++){ */
    /*         if(x[k]>0){ */
    /*             cout << k << " " << x[k] << endl; */
    /*         } */
    /*     } */
    /* } */
     


    /* cout << "String A " << endl; */
    /* int i = 0;  */
    /* for(auto x : pre1){ */
    /*     cout <<"position : " << i++ << endl; */
    /*     for(auto pair : x){ */
    /*         cout << pair.first << " " << pair.second << endl; */
    /*     } */
    /* } */
    /**/
    /* cout << "String B " << endl; */
    /* int j = 0; */
    /* for(auto x : pre2){ */
    /*     cout <<"position : " << j++ << endl; */
    /*     for(auto pair : x){ */
    /*         cout << pair.first << " " << pair.second << endl; */
    /*     } */
    /* } */
    /* cout << pre1[3]['b'] << endl; */
    /* cout << */

    while(q--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        int ans = 0;
        /* cout << l << " ----- " << r << endl; */
        for(int i = 0 ; i<26; i++){
            if(pre1[n-1][i]>0){
                // get count of x in range [L,R]
                char x = 'a'+i;
                /* cout << x << " ::: " ; */

                int cntA;
                if(l!=0) cntA = pre1[r][i] - pre1[l-1][i];
                else cntA = pre1[r][i];
                /* cout << cntA << " -> "; */

                int cntB;
                if(l!=0) cntB = pre2[r][i] - pre2[l-1][i];
                else cntB = pre2[r][i];
                /* cout << cntB << " -> " << endl;  */

                if(cntA > cntB) ans+=(cntA-cntB);
            }
        }
        cout << ans << endl;
    }
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
    for(int tc= 0; tc < t; tc++){
        /* cout << "test case " << tc << endl; */
        soln();
    }

}

