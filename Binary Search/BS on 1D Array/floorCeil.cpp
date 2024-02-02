// Time Complexity: O(log n)
// Space Complexity: O(1)

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.

	// Floor of the array
	int low= 0;
	int high= n-1;
	int floor= -1;

	while(low<= high){
		int mid= (low+high)/2;
		if(a[mid]<= x){
			floor= a[mid];
			low= mid+1;
		}
		else{
			high= mid-1;
		}
	}


	// Finding ceil
	low= 0;
	high= n-1;
	int ceil= -1;
	
	while(low<= high){
		int mid= (low+high)/2;
		if(a[mid]>= x){
			ceil= a[mid];
			high= mid-1;
		}
		else{
			low= mid+1;
		}
	}
	

	return {floor ,ceil};
}