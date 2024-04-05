class Solution {
public:
    int findMin(vector<int>& nums) {
        int l= 0;
        int r= nums.size()-1;
        int result= INT_MAX;
        int minElement= INT_MAX;
        while(l <= r){
            int mid= (l+r)/2;
            if(nums[l]<=nums[mid]){
                minElement= min(nums[l], minElement);
                l= mid+1;
            }
            else{
                minElement= min(minElement, nums[mid]);
                r= mid-1;
            }
            cout << l << " " << mid << " " << minElement << endl;
            
        }
        return minElement;
    }
};
/*
- 5 4 6 7 0 1 2
l= 0, r= 0
mid= (0+0)/2= 0

*/