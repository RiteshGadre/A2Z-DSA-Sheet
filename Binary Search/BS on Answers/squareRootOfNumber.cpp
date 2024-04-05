int floorSqrt(int n)
{
    // Write your code here.
    int start= 0;
    int end= n;
    int mid;
    int ans= -1;

    while(start<=end){
       mid= (start+end)/2;
       if((long long) mid * mid <= n){
           ans= max(ans, mid);
           start= mid+1;
       }
       else{
           end= mid-1;
       }
    }
    return ans;
}
