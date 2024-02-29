// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    unordered_map<int, int> mp;
    vector<int> ans;
    for(auto &element: nums) mp[element]++;   
    for(int i=1; i<=n; i++) ans.push_back(mp[i]);
    return ans;
}