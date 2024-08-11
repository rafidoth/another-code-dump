#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


vector<string>mat(4);
bool rowcheck[4][4];
bool colcheck[4][4];
bool sqrcheck[4][4];
int sqr_finder(int row, int col){
    if(row <=1 && col <= 1) return 0;
    else if (row <=1 && col <=3) return 1;
    else if (row <=3 && col <=1) return 2;
    else return 3;
}
int machine(char x){
    if(x== '1') return 0;
    else if (x== '2') return 1;
    else if(x== '3') return 2;
    else return 3;
}
vector<pair<int,int>> missing;
vector<int> sel;
void fuc(int curr){
    if(sel.size() == missing.size()) {
       for(int i = 0 ; i< curr; i++){
           pair<int,int> pr = missing[i];
           int row = pr.first;
           int col = pr.second;
           int ans = sel[i] +1;
           mat[row][col] = char(ans +48);
       }
       return;
    }
    pair<int,int> p = missing[curr];
    int row = p.first;
    int col = p.second;
    for(int i = 0; i<4;i++){
        if(rowcheck[row][i]) continue;
        if(colcheck[col][i]) continue;
        int sqr = sqr_finder(row,col);
        if(sqrcheck[sqr][i]) continue;
        
        rowcheck[row][i] = true; 
        colcheck[col][i] = true; 
        sqrcheck[sqr][i] = true; 
        sel.push_back(i);  
        //for(int x : sel) cout << x+1 << " " ;
        //cout <<endl;
        fuc(curr+1);
        sel.pop_back();
        rowcheck[row][i] = false; 
        colcheck[col][i] = false; 
        sqrcheck[sqr][i] = false; 
    }
}
int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t ;cin >> t;
    for(int tc =0; tc<t;tc++){
       //cout << "test case " << (tc+1) << endl;
       cout << "Case #"<< tc+1<< ":"<<endl;
       for(int m =0; m<4;m++){
           string s; 
           cin >> s;
           mat[m] = s;
       }
       for(int i = 0; i<4; i++){
           for(int j= 0; j<4;j++){
               rowcheck[i][j] = false;
               colcheck[i][j] = false;
               sqrcheck[i][j] = false;
           }
       } 
       missing.clear();
       for(int i = 0; i<4; i++){
           for(int j= 0; j<4;j++){
               char x = mat[i][j];
               if(x == '*'){
                   missing.push_back(make_pair(i,j));
                   continue;
               } 
               int row = i; 
               int col = j;
               rowcheck[row][machine(x)] = true;
               colcheck[col][machine(x)] = true;
               int sqr = sqr_finder(row,col);
               sqrcheck[sqr][machine(x)] = true;
           }
       } 
       fuc(0);
       for(int i = 0; i<4; i++){
           for(int j= 0; j<4;j++){
               cout << mat[i][j];
           }
           cout <<endl;
       } 
       /*
       cout << "row check" << endl;
       for(int i = 0; i<4; i++){
           for(int j= 0; j<4;j++){
               cout << rowcheck[i][j]<< " " ;
           }
           cout <<endl;
       } 
       cout << "col check" <<endl; 
       for(int i = 0; i<4; i++){
           for(int j= 0; j<4;j++){
               cout << colcheck[i][j]<< " " ;
           }
           cout <<endl;
       } 
       cout << "sqr check" <<endl;
       for(int i = 0; i<4; i++){
           for(int j= 0; j<4;j++){
               cout << sqrcheck[i][j]<< " " ;
           }
           cout <<endl;
       } 
       cout <<endl;
        */
    }

}

