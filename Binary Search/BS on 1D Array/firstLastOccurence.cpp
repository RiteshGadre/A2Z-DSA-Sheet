// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOccurence= findFirstOccurence(nums, target);
        if(findFirstOccurence== -1) return {-1, -1};
        int lastOccurence= findLastOccurence(nums, target);
        return {firstOccurence, lastOccurence};
    }


    int findFirstOccurence(vector<int>nums, int target){
        int low= 0;
        int high= nums.size()-1;
        int ans= -1;

        while(low<= high){
            int mid= (low + high)/2;
            if(nums[mid]== target){
                ans= mid;
                high= mid-1;
            }
            else if(nums[mid]> target) high= mid-1;
            else low= mid+1;
        }
        return ans;
    }


    int findLastOccurence(vector<int>nums, int target){
        int low= 0;
        int high= nums.size()-1;
        int ans= -1;

        while(low<= high){
            int mid= (low + high)/2;
            if(nums[mid]== target){
                ans= mid;
                low= mid+1;
            }
            else if(nums[mid]> target) high= mid-1;
            else low= mid+1;
        }
        return ans;   
    }
};

