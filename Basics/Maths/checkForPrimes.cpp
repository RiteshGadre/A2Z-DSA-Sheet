// Time Complexity: O(n)
// Space Complexity: O(n)

bool isPrime(int n)
{
	// Write your code here.
	
	for(int i=2; i*i<=n; i++){
		if(n%i==0) return 0;
	}
	return (n!=1 && 1);
}
