void merge(vector<int> &a, int left, int mid, int right, int &sum){
    vector<int> temp;
    int index1= left;
    int index2= mid+1;

    while(index1<=mid && index2<=right){
        if(a[index1] > a[index2]){
            sum+= mid-index1+1;
            index2++;
        }
        else{
            index1++;
        }
    }
    

    index1= left;
    index2= mid+1;

    while(index1<=mid && index2<=right){
        if(a[index1] < a[index2]) temp.push_back(a[index1++]);
        else temp.push_back(a[index2++]);
    }

    while(index1 <= mid) temp.push_back(a[index1++]);
    while(index2 <= right) temp.push_back(a[index2++]);

    int mainIndex= 0;
    for(int i= left; i<= right; i++){
        a[i]= temp[mainIndex++];
    }
}

void mergeSort(vector<int> &a, int left, int right, int &sum){
    if(left>= right) return ;
    int mid= (left+right)/2;
    mergeSort(a, left, mid, sum);
    mergeSort(a, mid+1, right, sum);
    merge(a, left, mid, right, sum);
}

int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    int sum= 0;
    mergeSort(a, 0, n-1, sum);
    // for(int i=0; i<n; i++) cout << a[i] << " ";
    // cout << endl;
    return sum;
}
