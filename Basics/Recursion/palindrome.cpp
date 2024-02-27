bool helper(int i, int j, string &str){
    if(i>j) return 1;
    else if(str[i]!= str[j]) return 0;
    else return helper(i+1, j-1, str);

}
bool isPalindrome(string& str) {
    // Write your code here.
    int i= 0, j= str.size()-1;
    return helper(i, j, str);
}
