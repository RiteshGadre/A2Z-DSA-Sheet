class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count= 0;
        unordered_map<int, int> map;
        // map[0]= 1;
        int preSum= 0;
        int pos= 0;
        for(auto num: nums){
            preSum+= num;
            if(preSum== k) count++;
            if(map.find(preSum-k) != map.end()) count+= map[preSum-k];
            map[preSum]++;
            cout << pos++ << " " << num << " " << count << endl;
        }
        return count;
    }
};

/* 
[0, 0, 0, 0, 0]  target= 0

prefix= [0, 0, 0, 0, 0]

*/