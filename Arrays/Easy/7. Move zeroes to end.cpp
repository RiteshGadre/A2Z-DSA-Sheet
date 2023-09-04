vector<int> moveZeros(int n, vector<int> arr) {
    // Write your code here.
    int i=0;

    for(int j=0; j<n; j++){
        if(arr[j]) arr[i++]= arr[j];
    }

    for(; i<n; i++) arr[i]= 0;
    return arr;
}
