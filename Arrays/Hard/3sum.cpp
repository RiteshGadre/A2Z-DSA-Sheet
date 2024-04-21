class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        set<vector<int>> set;

        for(int i=0; i<nums.size()-2; i++){
            int rem= 0 - nums[i];
            int left= i+1;
            int right= nums.size()-1;
            while(left<right){
                if(nums[left]+nums[right]==rem){
                    set.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right] > rem){
                    right--;
                }
                else left++;
            }
        }
        
        for(auto row: set){
            result.push_back(row);
        }
        return result;
    }
};