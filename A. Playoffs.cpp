#include <bits/stdc++.h>
using namespace std;

int pow(int a, int b){
	int x = 1;
	for(int i = 0; i < b; i++){
		x*=a;
	}
	return x;
}

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a = pow(2, n);
		cout << a-1 << "\n";
	}
}
