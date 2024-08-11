 
#include <bits/stdc++.h>
using namespace std;
 
 
int fun(vector<int>& arr, int capacity){
	int count = 0;
	int sum = 0;
	for(int x : arr){
		if(sum+x > capacity){
			count++;
			sum = x;
		}else{
			sum += x;
		}
	}
	return count +1;
}
 
 
int main() {
	int n,k;
	cin >> n >> k;
	vector<int> arr(n);
	for(int i =0; i<n;i++){
		cin >> arr[i];
	}
	long long int start = arr[0];
	for(int i = 0; i <n;i++){
		if (arr[i]>start) start = arr[i];
	}
	long long int end = 0;
	for(int x : arr) end+=x;
 
	// for(int i = start; i<=end;i++){
	// 	int count_box= fun(arr,i);
	// 	if(count_box <= k){
	// 		cout << i << endl;
	// 		return 0;
	// 	}
	// }
	int initial_start = start; 
	while(start <= end){
		int mid= (start + end)/2;
		int countBox = fun(arr,mid);
		if(countBox == k){
			if(mid==initial_start){
				cout << mid << endl;
				return 0;
			}
			if(fun(arr,mid-1)>k){
				cout << mid << endl;
				return 0;
			}
			end = mid -1;
		}else if (countBox > k) start = mid + 1;
		else end = mid -1;
	}
	cout << start << endl;
}
