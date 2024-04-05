class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low= 0;
        int high= nums.size()-1;

        if(!high) return high;
        else if(nums[low] > nums[low+1]) return low;
        else if(nums[high] > nums[high-1]) return high;
        low++;
        high--;

        while(low <= high){
            int mid= (low+high)/2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid] > nums[mid-1]) low= mid+1;
            else high= mid-1;
        }

        return 0;
    }
};

// 1 2 1 3 5 6 4
// 0 1 2 3 4 5 6