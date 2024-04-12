#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, int k){
    // Write your code here
    int n= a.size();
    map<int, int> map;
    int ans= INT_MIN;
    int curr= 0;

    for(int i=0; i<n; i++){
        curr+= a[i];
        if(curr== k) ans= max(ans, i+1);
        else if(map.find(curr-k) != map.end()){
            ans= max(ans, i-map[curr-k]);
        }
        
        if(map.find(curr) == map.end()){
            map[curr]= i;
        }

        // for(auto it: map) cout << it.first << " " << it.second << endl;
    }
    return max(ans, 0);
}