class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        set<vector<int>> set;
        int n= nums.size();

        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
               long long twoSum= (long long)(nums[i] + nums[j]);
               long long temp= target - twoSum;
               int l= j+1;
               int r= nums.size()-1;

               while(l<r){
                if(nums[l]+nums[r]== temp){
                    set.insert({nums[i], nums[j], nums[l], nums[r]});
                    l++;
                    r--;
                }
                else if(nums[l]+nums[r] > temp) r--;
                else l++;
               }
            }
        }

        for(auto it: set){
            result.push_back(it);
        }

        return result;
    }
};

// 1 0 -1 