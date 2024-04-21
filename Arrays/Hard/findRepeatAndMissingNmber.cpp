#include<bits/stdc++.h>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n= a.size();
    int mainSum= (n*(n+1))/2;
    int tempSum= 0;
    int doubleNumer= -1;
    sort(a.begin(), a.end());

    for(int i=0; i<n-1; i++){
        if(a[i]== a[i+1]){
            doubleNumer= a[i];
        } 
        tempSum+= a[i];
    }
    tempSum+= a[n-1];
    // cout << mainSum << " " << tempSum << " " << doubleNumer << endl;
    return {doubleNumer, mainSum-(tempSum-doubleNumer)};
}