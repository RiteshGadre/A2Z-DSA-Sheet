int countDigits(int n){
	// Write your code here.	
	int num= n;
	int count= 0;

	while(n){
		int rem= n%10;
		count+= ((rem!=0) && (num%rem== 0));
		n= n/10;
	}
	return count;
}