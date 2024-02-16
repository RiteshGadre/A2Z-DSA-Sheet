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
		int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
	}

	for (int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}

	cout << endl;
}