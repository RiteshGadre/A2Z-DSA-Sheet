// Codestudio:
// - Time Complexity: O(n)
// - Space Complexity: O(1)
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int insertPos= 1;
	for(int i=1; i<n; i++){
		if(arr[i]!= arr[i-1]){
			arr[insertPos++]= arr[i];
		}
	}
	return insertPos;
}


// Leetcode:
// - Time Complexity: O(n)
// - Space Complexity: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[j]!= nums[i]) nums[++i]= nums[j];
        }
        return ++i;
    }
};