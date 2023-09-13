class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            vector<int> temp(i+1);
            ans.push_back(temp);
            temp.clear();
        }

        for(int i=0; i<n; i++){
            for(int j=0; j < ans[i].size(); j++){
                if(j== 0 || j== i)
                    ans[i][j]= 1;
                else 
                    ans[i][j]= ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
    }
};

// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1