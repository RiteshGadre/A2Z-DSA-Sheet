#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int uniqueElement= arr[0];
	for(int i=0; i<arr.size(); i+= 2) {
		if(arr[i]!= arr[i+1]) return arr[i];
	}
	return -1;
}