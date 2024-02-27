vector<int> helper(vector<int> &arr, int x){
    if(x==0) return arr;
    arr.push_back(x);
    return helper(arr, x-1);
}


vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> arr;
    arr.push_back(x);
    return helper(arr, x-1);
}