#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a= {1, 2, 3, 4, 6};
	vector<int> b= {2, 3, 5};
	int n= a.size();
	int m= b.size();

	vector<int> arr;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(a[i]<b[j]) arr.push_back(a[i++]);
		else arr.push_back(b[j++]);
	}

	while(i<n) arr.push_back(a[i++]);
	while(j<m) arr.push_back(b[j++]);

	for(auto element : arr) cout << element << " ";


	return 0;
}