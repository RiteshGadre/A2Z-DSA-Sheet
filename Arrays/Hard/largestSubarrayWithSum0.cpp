#include<vector>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	map<int, int> ans;
	ans[0]= -1;
	int sum= 0;
	int count= 0;

	for(int i=0; i<arr.size(); i++){
		sum+= arr[i];
		if(ans.find(0-sum) != map.end()){
			count= max(count, i-ans[0-sum]);
		}
		else{
			ans[sum]= i;
		}
	}
	return count;
	
}