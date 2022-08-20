#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	vector<int> vect(arr, arr+n);
	int p = *max_element(vect.begin(), vect.end());
	int sum = p*n;
	int sum1 = accumulate(vect.begin(), vect.end(), 0);
	cout << sum-sum1 << "\n";
}