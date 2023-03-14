#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	ll a[n+5], ans = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	for(int i = 0; i < n; i++){
		ll x = abs(a[i]-(i+1));
		ans+=x;
	}
	cout << ans;
}
