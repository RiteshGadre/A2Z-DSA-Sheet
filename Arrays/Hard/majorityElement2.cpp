class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n= nums.size();
        vector<int> result;
        int majority1= -1; int count1= 0;
        int majority2= -1; int count2= 0;

        for(int i=0; i<n; i++){
            if(!count1){
                majority1= nums[i];
                count1++;
            }
            else if(!count2){
                count2= 1;
                majority2= 1;
            }
            else if(nums[i]!=majority1) count1--;
            else if(nums[i]!=majority2) count2--;
            else{
                count1--;
                count2--;
            }
        }

        for(int i=0; i<n; i++){
            if(majority1== nums[i]) count1--;
            if(majority2== nums[i]) count2--;
            // if(nums[i]== majority1) count1--;
            // if(nums[i]== majority2) count2--;
        }

        if(!count1) result.push_back(majority1);
        if(!count2) result.push_back(majority2);
        return result;
    }
};


// 1  2  3  1  2  1  2  1  2


// m1=1 ct=1
// m2=11 ct=1
