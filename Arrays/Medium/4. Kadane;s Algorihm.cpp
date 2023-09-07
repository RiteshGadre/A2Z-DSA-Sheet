class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi= INT_MIN;
        int curr= 0;

        for(int element : nums){
            curr= curr + element;
            curr= max(curr, element);
            maxi= max(curr, maxi);
        }

        return maxi;
    }
};