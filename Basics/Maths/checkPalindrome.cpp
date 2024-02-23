bool palindrome(int n)
{
    // Write your code here
    int orginalNum= n;
    int revNum= 0;
    
    while(n){
        revNum= revNum*10 + (n%10);
        n= n/10;
    }

    return (orginalNum== revNum);
}