// Codestudio: Rotation of array by D places towards left side
// - Time Complexity: O(n)
// - Space Complexity: O(1)
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n= arr.size();
    k= k%n;
    
    // Reverse the array from 0th position to kth position
    int start= 0;
	int end= k-1;
	while(start<end) 
        swap(arr[start++], arr[end--]);

    // Reverse the array from kth position to nth position
	start= k;
	end= n-1;
	while(start<end) 
        swap(arr[start++], arr[end--]);

    // Reverse the whole array
	start= 0;
	end= n-1;
	while(start<end) 
        swap(arr[start++], arr[end--]);


    return arr;
}


// Leetcode: Rotation of array by D places towards right side
// - Time Complexity: O(n)
// - Space Complexity: O(1)