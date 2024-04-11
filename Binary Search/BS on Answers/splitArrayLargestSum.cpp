class Solution {
public:
    int isPossible(vector<int> &nums, int curr){
        int count= 1;
        int currSum= 0;

        for(int num: nums){
            if(currSum+num > curr){
                count++;
                currSum= num;
            }
            else{
                currSum+= num;
            }
        }
        return count;
    }

    int splitArray(vector<int>& nums, int k) {
        int start= *max_element(nums.begin(), nums.end());
        int end= accumulate(nums.begin(), nums.end(), 0);
        int result= end;

        while(start <= end){
            int mid= (start+end)/2;
            if(isPossible(nums, mid) <= k){
                result= mid;
                end= mid-1;
            }
            else
                start= mid+1;
            }
        }
        return result;
    }
};