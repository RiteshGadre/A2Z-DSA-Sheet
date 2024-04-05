int findKRotation(vector<int> &arr){
    // Write your code here.    
    int l= 0;
    int r= arr.size()-1;
    int element= arr[0];
    int index= 0;

    while(l <= r){
        int mid= (l+r)/2;
        if(arr[l] <= arr[mid]){
            index= (arr[index] >= arr[l] ? l : index); 
            l= mid+1;
        }
        else{
            index= (arr[index] >= arr[mid] ? mid : index); 
            r= mid-1;
        }
    }
    return index;
}