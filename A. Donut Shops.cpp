#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		ll a, b, c, m = -1, n = -1;
		cin >> a >> b >> c;
		if(a < c) m = 1;
		if(a*b > c) n = b;
		cout << m << " " << n << "\n";
	}
}
