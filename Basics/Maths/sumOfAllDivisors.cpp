int sumOfDivisor(int n){
	int sum= 0;
	for(int i=1; i<=n; i++){
		if(n%i==0) sum+= i;
	}
	return sum;
}


int sumOfAllDivisors(int n){
	// Write your code here.
	int sum= 0;
	for(int i=1; i<=n; i++){
		sum+= sumOfDivisor(i);
	}
	return sum;
}