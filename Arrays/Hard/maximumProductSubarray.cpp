class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod= 1;
        int maxProd= nums[0];
        
        for(int i=0; i<nums.size(); i++){
            prod*= nums[i];
            maxProd= max(maxProd, prod);
            if(prod== 0) prod= 1;
        }

        prod= 1;
        for(int i=nums.size()-1; i>=0; i--){
            prod*= nums[i];
            maxProd= max(maxProd, prod);
            if(prod== 0) prod= 1;
        }

        return maxProd;
    }
};

// 2 6 -12 -48
// 2 3  -2  4
// -48 -24 -8 4 

