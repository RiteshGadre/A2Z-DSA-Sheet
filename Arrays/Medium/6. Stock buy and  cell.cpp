class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n= arr.size();
        int start= 0;
	    int mx= 0;
	    for(int i=1; i<n; i++){
		    if(arr[i]<arr[start]){
			    start= i;
	    	}
		    mx= max(mx, arr[i]-arr[start]);
		    // cout << start << " " << arr[i] << " " << mx << endl ;
	    }
        return mx;
        
        
    }
};