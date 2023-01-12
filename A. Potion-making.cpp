#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		int a = 100-k;
		int gcd = __gcd (k, a);
		if(k%gcd == 0 && a%gcd == 0){
			k /= gcd;
			a /= gcd;
		}
		cout << k+a << "\n";
	}
}
