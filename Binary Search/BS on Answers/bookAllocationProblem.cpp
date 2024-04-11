bool isPossible(vector<int> &arr, int n, int m, int books){
    int count= 1;
    int curr= 0;
    for(int i=0; i<n; i++){
        if(curr + arr[i] > books){
            count++;
            curr= arr[i];

            if(count > m) return 0;
        }
        else{
            curr+= arr[i];
        }
    }
    // cout << count << endl;
    return (count <= m);
}


int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int start= *max_element(arr.begin(), arr.end());
    int end= accumulate(arr.begin(), arr.end(), 0);
    int result= end;

    while(start <= end){
        int mid= (start+end)/2;
        // cout << start << " " << end << " " << mid << " ";
        if(isPossible(arr, n, m, mid)){
            result= mid;
            end= mid-1;
        }
        else{
            start= mid+1;
        }
    }
    
    return result;
}

// left= maxOfArray
// right= sumOfArray




