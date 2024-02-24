int countDigit(int n){
	int count= 0;
	while(n){
		count++;
		n= n/10;
	}
	return count;

}

bool checkArmstrong(int n){
	//Write your code here
	int noOfDigits= countDigit(n);

	int num= n;
	int armStrNum= 0;
	while(num){
		armStrNum+= pow(num%10, noOfDigits);
		num= num/10;
	}
	return (armStrNum== n);
}
