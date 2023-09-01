vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int largest= a[0];
    int secondLargest= INT_MIN;
    int smallest= a[0];
    int secondSmallest= INT_MAX;

    for(int i=1; i<n; i++){
        if(a[i]>largest){
            secondLargest= largest;
            largest= a[i];
        }

        if(a[i]>secondLargest && a[i]<largest){
            secondLargest= a[i];
        }

        if(a[i]<smallest){
            secondSmallest= smallest;
            smallest= a[i];
        }

        if(a[i]<secondSmallest && a[i]>smallest){
            secondSmallest= a[i];
        }
    }

    return {secondLargest, secondSmallest};
}
