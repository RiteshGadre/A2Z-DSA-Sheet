// Codestudio: For simply checking whether array is sorted or not.
// - Time Complexity: O(n)
// - Space Complexity: O(1)

int isSorted(int n, vector<int> a) {
    // Write your code here.
    if(n==1) return 1;
    bool isSorted= 1;
    for(int i=1; i<n; i++){
        if(a[i]<a[i-1]){
            return !isSorted;
        }
    }
    return isSorted;
}


// Leetcode: 
// - Iterate through whole array
// - Count the number of times it's breaking ascending order
// - Compare first element with last element and increase count if it is gretaer
// - Return false if count is greter than 2 else return true
// - Time Complexity: O(n)
// - Space Complexity: O(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        int count= 0;
        
        for(int i=1; i<nums.size(); i++){
            count+= (nums[i]<nums[i-1]);
        }

        count+= (nums[0]<nums[nums.size()-1]);

        return count<=1;

    }
};