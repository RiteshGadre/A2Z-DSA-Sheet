class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low= 1;
        int high= *max_element(nums.begin(), nums.end());
        int ans= high;
        long long ansCount= divisor(nums, threshold, 1);

        while(low <= high){
            int mid= (low+high)/2;
            long long curr_result= divisor(nums, threshold, mid);
            if(ans>mid && curr_result <= threshold){
                cout << ans << " " << mid << endl;
                ans= min(ans, mid);
                high= mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return ans;
    }

    long long divisor(vector<int> &nums, int threshold, int mid){
        long long count= 0;
        for(int num: nums){
            count+= num/mid;
            count+= (num%mid>0);
        }
        return count;
    }
};

/*
- Take the reange from 1 to max
- check for mid
- if mid < ans and midcount < threshold
  - result= min
  - high= mid-1
- low= mid+1
*/