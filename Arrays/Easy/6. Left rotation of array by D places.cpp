#include <bits/stdc++.h>
using namespace std;

int main(){
	int n= 11;
	int k=7;
	k= k%n;
	vector<int> arr= {1, 3, 6, 11, 12, 17, 22, 26, 30, 33, 38};

	int start= 0;
	int end= k-1;
	while(start<end) swap(arr[start++], arr[end--]);

	start= k;
	end= n-1;
	while(start<end) swap(arr[start++], arr[end--]);

	start= 0;
	end= n-1;
	while(start<end) swap(arr[start++], arr[end--]);



	while(start<end) swap(arr[start++], arr[end--]);
	for(auto element: arr){
		cout << element << " ";
	}

}