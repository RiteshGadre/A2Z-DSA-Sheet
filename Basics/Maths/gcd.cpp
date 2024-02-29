// Time Complexity: O(1)
// Space Complexity: O(log(min(a, b)))

int gcd(int a,int b)
{
	//Write your code here
	if(b==0) return a;
	return gcd(b, a%b);
}

