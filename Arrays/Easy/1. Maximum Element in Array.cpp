#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int mx= 0;
    for(int i=0; i<n; i++){
        mx= max(mx, arr[i]);
    }
    return mx;
}
