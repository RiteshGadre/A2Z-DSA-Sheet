#include <bits/stdc++.h> 
void sortArray(vector<int>& nums, int n)
{
    // Write your code here
    int z=0, o=0, t=0;
    for(auto it: nums){
        (it==0) ? z++ : ((it==1) ? o++ : t++);
    }
    int i=0;
    while(z--) nums[i++]= 0;
    while(o--) nums[i++]= 1;
    while(t--) nums[i++]= 2;
}
