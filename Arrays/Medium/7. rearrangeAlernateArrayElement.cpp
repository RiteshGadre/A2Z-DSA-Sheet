// Approach 1:
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        for(auto it: nums){
            if(it>= 0) temp1.push_back(it);
            else  temp2.push_back(it);
        }
        
        int i=0, j=0;
        int k= 0;
        while(i<temp1.size() && temp2.size()){
            nums[k++]= temp1[i++];
            nums[k++]= temp2[j++];
        }
        
        return nums;
        
    }
};


// Approach 2:
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int neg= 1;
        int pos= 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans[pos]= nums[i];
                pos+= 2;
            }
            else{
                ans[neg]= nums[i];
                neg+= 2;
            }
        }
        return ans;
    }
};