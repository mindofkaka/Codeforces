#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll x = (n+k-1)/k;
		k*=x;
		cout << (k+n-1)/n << '\n';
	}
}
