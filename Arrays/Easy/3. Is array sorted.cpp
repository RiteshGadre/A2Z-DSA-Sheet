int isSorted(int n, vector<int> a) {
    // Write your code here.
    if(n==1) return 1;
    bool isSorted= 1;
    for(int i=1; i<n; i++){
        if(a[i]<a[i-1]){
            return !isSorted;
        }
    }
    return isSorted;
}
