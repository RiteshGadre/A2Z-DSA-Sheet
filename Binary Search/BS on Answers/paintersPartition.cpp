int paint(vector<int> &boards, int paintNumber){
    int count= 1;
    int currSum= 0;

    for(int board: boards){
        if(currSum + board > paintNumber){
            count++;
            currSum= board;
        }
        else{
            currSum+= board;
        }
    }
    return count;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int left= *max_element(boards.begin(), boards.end());
    int right= 0;
    for(int board: boards) right+= board;
    // cout << right << endl;
    int result= left;

    while(left <= right){
        int mid= (left+right)/2;
        int currResult= paint(boards, mid);
        // cout << left << " " << right << " " << mid << " " << currResult << endl;
        if(currResult<= k) {
            result= mid;
            right= mid-1;
        }
        else if(currResult > k){
            left= mid+1;
        }
    }
    return result;
}