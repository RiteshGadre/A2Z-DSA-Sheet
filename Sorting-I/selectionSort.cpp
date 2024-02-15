void solve(){
	int n;
	cin >> n;
	vi arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}

	for (int i = 0; i < n-1; ++i)
	{
		int mini= i;
		for (int j = i+1; j < n; ++j)
		{
			if(arr[j]< arr[i]) mini= j;
		}
		swap(arr[i], arr[mini]);
	}

	for (int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}

	cout << endl;
}