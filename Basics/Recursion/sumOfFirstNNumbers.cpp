long long sumFirstN(long long n) {
    // Write your code here.
    if(n==1) return 1;
    return n + sumFirstN(n-1);
}