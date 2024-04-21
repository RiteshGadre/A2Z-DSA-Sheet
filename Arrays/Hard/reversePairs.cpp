class Solution {
public:
    void merge(vector<int> &nums, int left, int mid, int right, int &count){
        int index1= left;
        int index2= mid+1;
        vector<int> temp;

        while(index1 <= mid && index2 <= right){
            if(nums[index1]> (long long)2*nums[index2]){
                count+= mid-index1+1;
                index2++;
            }
            else{
                index1++;
            }
        }

        index1= left;
        index2= mid+1;

        while(index1 <= mid && index2 <= right){
            if(nums[index1] < nums[index2]) temp.push_back(nums[index1++]);
            else temp.push_back(nums[index2++]);
        }

        while(index1 <= mid) temp.push_back(nums[index1++]);
        while(index2 <= right) temp.push_back(nums[index2++]);

        int mainIndex= 0;

        for(int i= left; i<= right; i++){
            nums[i]= temp[mainIndex++];
        }

    }

    void mergeSort(vector<int> &nums, int left, int right, int &count){
        if(left >= right) return ;
        int mid= (left+right)/2;
        mergeSort(nums, left, mid, count);
        mergeSort(nums, mid+1, right, count);
        merge(nums, left, mid, right, count);
    }

    int reversePairs(vector<int>& nums) {
        int count= 0;
        mergeSort(nums, 0, nums.size()-1, count);
        return count;
    }
};

//         1 3 2 3 1
//     1 3 2       3 1
//   1 3    2     3    1
//     1 2 3       1 3
//         1 1 2 3 