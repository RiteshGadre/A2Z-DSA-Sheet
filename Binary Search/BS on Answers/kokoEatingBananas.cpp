class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low= 1;
        int high= *max_element(piles.begin(), piles.end());
        int result= INT_MAX;

        while(low <= high){   
            int mid= (low+high)/2;
            if(isValid(mid, h, piles)){
                result= min(result, mid);
                high= mid-1;
            }
            else{
                low= mid+1;
            }      
        }

        return result;  
    }

    bool isValid(int mid, int h, vector<int> &piles){
        long long count= 0;
        for(int pile: piles){
            count+= (pile/mid);
            count+= (pile%mid > 0);
        }
        return (count<=h);
    }
};

/*
- 
*/