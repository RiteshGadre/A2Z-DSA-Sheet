// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int, int> ans;
    for(auto &element: v){
       ans[element]++;
    }

    int maxFreq= 0, minFreq= v.size();
    int maxEle= 0, minEle= 0;
    for(auto it: ans){
        int element= it.first; 
        int freq= it.second;

        // for minimum
        if(freq== minFreq){
            minEle= min(element, minEle);
        }
         if(freq< minFreq){
            minFreq= freq;
            minEle= element;
        }

        // for maximum
        if(freq== maxFreq){
            maxEle= min(element, maxEle);
        }
         if(freq> maxFreq){
            maxFreq= freq;
            maxEle= element;
        }
        
    }

    return {maxEle ,minEle};
}