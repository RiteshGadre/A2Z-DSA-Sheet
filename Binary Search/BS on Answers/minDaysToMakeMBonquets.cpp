class Solution {
public:
    bool isBloomed(vector<int> nums, int m, int k, int mid){
        int count= 0;
        int currCount= 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]<= mid){
                currCount++;
                if(currCount== k){
                    count++;
                    currCount= 0;
                }
            }
            else currCount= 0;

            if(count>=m) return 1;
        }
        return 0;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)k * m > bloomDay.size()) return -1;
        int start= *min_element(bloomDay.begin(), bloomDay.end());
        int end= *max_element(bloomDay.begin(), bloomDay.end());
        int result= end;

        while(start <= end){
            int mid = (start + end)/2;
            if(isBloomed(bloomDay, m, k, mid)){
                result= min(result, mid);
                end= mid-1;
            }
            else{
                start= mid+1;
            }

        }

        return result;
    }
};