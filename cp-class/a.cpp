
#include<bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


struct product{
  double perUnitCost;
  double weight;
  double cost;
};


bool comp(product &p1, product &p2){
  return p1.perUnitCost < p2.perUnitCost;
}

int main(){
  fastio();
  vector<int> arr(100),weights(100),cost(100);
  vector<product> products;  
  sort(products.begin(), products.end(), comp);

  int KnapsackSize;
  int profit = 0;
  for(int i =0; i<100; i++){
    product tmp = products[i];
    if(tmp.weight > KnapsackSize ) profit += KnapsackSize*tmp.perUnitCost;
    else{
      profit += tmp.weight * tmp.perUnitCost;
    } 
  }

}





