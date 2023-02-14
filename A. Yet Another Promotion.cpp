#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		ll a, b, n, m, ans;
		cin >> a >> b >> n >> m;
		if(a*m <= b*(m+1)) ans = (n%(m+1))*min(a, b)+n/(m+1)*m*a;
		else ans = b*n;
		cout << ans << '\n';
	}
}
