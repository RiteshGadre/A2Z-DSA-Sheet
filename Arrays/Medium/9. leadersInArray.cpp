vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> newArr; newArr.push_back(a[a.size()-1]);
    int maxElement= a[a.size()-1];
    for(int i= a.size()-2; i>=0; i--){
        // cout << a[i] << " " << maxElement << endl;
        if(a[i]> maxElement){
            newArr.push_back(a[i]);
            maxElement= a[i];
        }
    }
    return newArr;
}