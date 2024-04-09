class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left= 0;
        int right= arr.size()-1;
        int missing= 0;
        int mid;

        while(left <= right){
            mid= (left+right)/2;
            missing= arr[mid]-(mid+1);
            if(missing < k){
                left= mid+1;
            }
            else{
                right= mid-1;
            }
            cout << left << " " << right << endl;
        }

        return left+k;
        
    }
};