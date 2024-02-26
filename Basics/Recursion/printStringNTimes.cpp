vector<string> helper(vector<string> &vs, int j, int n){
	if(j>n) return vs;
	vs.push_back("Coding Ninjas ");
	return helper(vs, j+1, n);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> vs;
	int j= 1;
	return helper(vs, j, n);
	
}