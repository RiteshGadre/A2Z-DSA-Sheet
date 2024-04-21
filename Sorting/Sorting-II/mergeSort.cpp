void merge(int arr[], int low, int mid, int high){
    int temp[high-low+1];
    int k= 0;
    int left= 0;
    int right= mid+1;

    while(left<=mid && right<=high){
        if(arr[left]< arr[right])
            temp[k++]= arr[left++];
        else
            temp[k++]= arr[right++];
    }

    while(left<= mid){
        temp[k++]= arr[left++];
    }

    while(right<= high){
        temp[k++]= arr[right++];
    }

    for(int i= low; i<= high; i++){
        arr[i]= temp[i - low];
    }

}


void mergeSort(int arr[], int l, int r) {
    // Write Your Code Here
    if(l>= r) return;
    int mid= (l+r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);
    merge(arr, l, mid, r);

}