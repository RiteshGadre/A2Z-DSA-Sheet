vector<int> reverse(vector<int> &nums, int i, int j){
    if(i>j) return nums;
    int temp= nums[i];
    nums[i]= nums[j];
    nums[j]= temp;
    return reverse(nums, i+1, j-1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int i=0, j= n-1, mid= (i+j)/2;
    return reverse(nums, i, j);
}
