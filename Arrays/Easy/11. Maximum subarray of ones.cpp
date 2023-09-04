class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum= 0;
        int maxSum= 0;
        for(int i=0; i<nums.size(); i++){
            sum = (nums[i]==0 ? 0 : sum+1);
            maxSum= max(sum, maxSum);
        }
        return maxSum;
        
    }
};