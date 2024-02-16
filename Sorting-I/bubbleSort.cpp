// Time Complexity: O(n*n)
// Space Complexity: O(1)

void solve(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			if(arr[j]< arr[j-1]) 
				swap(arr[j], arr[j-1]);
		}
	}

	for (int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}

	cout << endl;
}