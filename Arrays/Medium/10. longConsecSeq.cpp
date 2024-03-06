class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==0 || nums.size()==1) return nums.size();
        int curr= 1;
        int maxSeq= 1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1] <2 ){
                curr+= (nums[i]-nums[i-1]);
            }
            else curr= 1;
            maxSeq= max(maxSeq, curr);
        }
        return maxSeq;  
    }
};