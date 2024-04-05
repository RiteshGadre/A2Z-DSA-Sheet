#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left= 0;
        int right= nums.size()-1;

        while(left <= right){
            int mid= (left + right)/2;
            if(nums[mid]== target) return mid;
            else if(nums[left] < nums[mid]){
                if(nums[left]<target && target<nums[mid]) right= mid-1;
                else left= mid+1;
            } 
            else{
                if(nums[mid]<target && target<nums[mid]) right= mid-1;
                else left= mid+1;
            }
        }
        return -1;
    }
};

int main(){
    Solution s1;
    s1.search({6,7,1,2,3,4,5}, 4);
    return 0;
}