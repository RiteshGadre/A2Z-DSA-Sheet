// Time Complexity: O(log n)
// Space Complexity: O(1)


int findFirstOccurence(vector<int>& arr, int n, int x);
int findLastOccurence(vector<int>& arr, int n, int x);
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int firstOccurence= findFirstOccurence(arr, n, x);
	if(firstOccurence== -1) return 0;
	int lastOccurence= findLastOccurence(arr, n, x);
	return lastOccurence - firstOccurence + 1;
}

int findFirstOccurence(vector<int>& arr, int n, int x){
	int low= 0;
	int high= n-1;
	int ans= -1;

	while(low<= high){
		int mid= (low+high)/2;
		if(arr[mid]== x){
			ans= mid;
			high= mid-1;
		}
		else if(arr[mid]< x) low= mid+1;
		else high= mid-1;
	}
	return ans;
}
