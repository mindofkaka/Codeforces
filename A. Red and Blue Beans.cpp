#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t; cin >> t;
	while(t--){
		ll r, b, d;
		cin >> r >> b >> d;
		ll dif = abs(r-b);
		ll mi = min(r, b);
		ll each = (dif + mi-1)/mi;
		if(each <= d) cout << "YES\n";
		else cout << "NO\n";
	}
}
