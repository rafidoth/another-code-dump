#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int fun(vector<int>& nums, int capacity){
    int count = 0;
    int sum = 0;
    for(int x : nums){
        if(sum+x > capacity){
            count++;
            sum = x;
        }else sum+=x;
    }
    return count+1;
}

int splitArray(vector<int>& nums, int k){
    int mx = nums[0];
    for(int x: nums) if(x>mx) mx= x;

    int sum = 0;
    for(int x : nums) sum+= x;
    int start = mx;
    int end = sum;
    while(start<=end){
        int mid = (start + end) / 2;
        int count = fun(nums, mid);
        if(count == k){
            if(mid == mx) return mid;
            if(fun(nums,mid-1)!= k) return mid;
            end = mid -1;
        }else if(count > k) start = mid + 1;
        else end = mid-1;
    }

    return start;
}


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    while(cin>> n >> m ){
        vector<int> nums(n);
        for(int i =0;i < n;i++){
            cin >> nums[i];
        }
        cout << splitArray(nums,m) << endl;
    }
}


