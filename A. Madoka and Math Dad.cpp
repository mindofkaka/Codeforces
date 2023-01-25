#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n%3 == 1){
			cout << 1;
			n--;
		}
		while(n > 0){
			cout << 2; n-= 2;
			if(n <= 0) break;
			cout << 1; n--;
		}
		cout << "\n";
	}
}
