class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        /*
        - transpose the matrix
        - reverse all rows in matrix
        */

        int n= matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(auto row: matrix){
            for(auto element: row){
                cout << element << " ";
            }
            cout << endl;
        }
        cout << endl;

        for(auto &row: matrix){
            reverse(row.begin(), row.end());
        }

        for(auto row: matrix){
            for(auto element: row){
                cout << element << " ";
            }
            cout << endl;
        }
        
    }
};

// 1 4 7
// 2 5 8
