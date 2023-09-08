class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int major= nums.size()/2;
        int ct= -1;
        unordered_map<int, int> map;
        for(auto it: nums) map[it]++;
        for(auto it: map){
            if(it.second>major) return it.first;
        }
        return -1;

        
    }
};