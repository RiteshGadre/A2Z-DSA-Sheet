class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n= intervals.size();
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        int left= intervals[0][0];
        int right= intervals[0][1];

        for(auto temp: intervals){
            cout << temp[0] << " " << temp[1] << endl;
        }

        for(int  i=1; i<n; i++){
            if(intervals[i][0] <= right){
                left= min(left, intervals[i][0]);
                right= max(right, intervals[i][1]);
            }
            else{
                result.push_back({left, right});
                left= intervals[i][0];
                right= intervals[i][1];
            }
        }
        result.push_back({left, right});
        return result;
    }
};