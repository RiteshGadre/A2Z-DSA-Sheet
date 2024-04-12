int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left= 0, right= 0, result= 0;
    int n= a.size();
    long long sum= 0;

    while(right < n){
        sum+= a[right];
        if(sum== k) result= max(result, right-left+1);
        while(left <= right && sum > k){
            sum-= a[left++];
            if(sum== k) result= max(result, right-left+1);
        }
        right++;
    }
    return result;
}