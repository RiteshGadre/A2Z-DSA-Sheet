string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(), book.end());
    int start= 0;
    int end= book.size()-1;

    while(start<end){
        int sum= book[start]+book[end];
        if(sum== target) return "YES";
        else if(sum<target) start++;
        else end--;
    }
    return "NO";
}
