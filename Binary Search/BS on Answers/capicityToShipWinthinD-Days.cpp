class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start= *max_element(weights.begin(), weights.end());
        int end= accumulate(weights.begin(), weights.end(), 0);
        int result= end;

        while(start <= end){
            int mid= (start+end)/2;
            if(weightLift(weights, days, mid)){
                result= min(result, mid);
                end= mid-1;
            }
            else{
                start= mid+1;
            }
        }
        return result;
    }


    int weightLift(vector<int> &weights, int days, int currWeight){
        int dayCount= 0;
        int sum= 0;
        int index= 0;

        for(int weight: weights){
            if(sum + weight > currWeight){
                sum= weight;
                dayCount++;
            }
            else sum+= weight; 
        }

        dayCount+= (sum > 0);
        cout << currWeight << " " << dayCount << endl;
        return dayCount<= days;
    }
};


/*
- We will have to use binary search from max elment to sum of all element
- Run the bs on middle element
- If the elment shipCount is leass than or equal days => end= mid-1
- If the element shipCount greater than days => start= mid+1
1 2 3 1 1   => 4

l=1 r=8 m=4
l=1 r=4 m=2

*/