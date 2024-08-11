#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



// O(logn)
bool binsearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() -1 ;
    while(start <=end){
        int mid = (start + end) /2;
        if(arr[mid] == target) return true;
        else if (target > arr[mid]) start = mid +1;
        else end = mid -1;
    }
    return false;
}


// O(nlogn)
vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes){

    int asum = 0;
    for(int x : aliceSizes) asum += x;
    int bsum = 0;
    for(int x : bobSizes) bsum += x;

    vector<int> answer;

    int n = bobSizes.size();
    sort(aliceSizes.begin(), aliceSizes.end());
    for(int i =0;i<n;i++){
        int b = bobSizes[i];
        int target = ((asum+bsum)/2 ) - ( bsum - b);
        bool foundTarget = binsearch(aliceSizes,target);
        if(foundTarget){
            answer.push_back(target);
            answer.push_back(b);
            return answer;
        }
    }
    return answer;
}


vector<int> fairCandySwapNaive(vector<int>& aliceSizes, vector<int>& bobSizes) {
    int aliceSum = 0;
    for(int x : aliceSizes) aliceSum+= x;
    int bobSum= 0;
    for(int x : bobSizes) bobSum+= x;
    vector<int> answer;
    
    for (int i = 0; i <(int) aliceSizes.size(); ++i) {
        int aTemp = aliceSizes[i];
        for (int m = 0; m <(int) bobSizes.size(); ++m) {
            int bTemp = bobSizes[m];
            int newAliceSum = aliceSum - aTemp + bTemp;
            int newBobSum = bobSum - bTemp + aTemp;
            if (newAliceSum == newBobSum) {
                answer.push_back(aTemp);
                answer.push_back(bTemp);
                return answer;
            }
        }
    }
    return answer;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a = {69,31,57,7,16};
    vector<int> b = {4,85,14,38,33};
    vector<int> res = fairCandySwapNaive(a,b);
    for(int x : res) cout<< x << " ";
    cout <<endl;
}


