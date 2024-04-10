bool isPossible(vector<int> &stalls, int k, int distance){
    int count= 1;
    int currIndex= 0;
    k--;
    for(int i=2; i<stalls.size() && k; i++){
      if (stalls[i] - stalls[currIndex] >= distance) {
        count++;
        currIndex = i;
        k--;
      }
    }
    // cout << k << endl;
    return (!k);
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int left= stalls[1]-stalls[0];
    int right= stalls[stalls.size()-1]-stalls[0];
    int ans= left;

    while(left <= right){
        int mid= (left+right)/2;
        // cout << left << " " << right << " ";
        if(isPossible(stalls, k, mid)){
            ans= max(ans, mid);
            left= mid+1;
            // cout << "executed " << mid << endl << endl;
        }
        else{
            right= mid-1;
        }
    }
    return ans;
}

