#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    map<int, int> map;
    int count= 0;
    int currXor= 0;
    map[0]++;

    for(int ele: a){
        currXor^= ele;
        if(map.find(currXor^b) != map.end()) count+= map[currXor^b];
        map[currXor]++;
    }

    return count;
}