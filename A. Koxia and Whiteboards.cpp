#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n, m;
	cin >> n >> m;
	ll a[n+m+1];
	for(int i = 0; i < n+m; i++) cin >> a[i];
	sort(a, a+(n+m-1));
	reverse(a, a+(n+m));
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum+=a[i];
	}
	cout << sum << '\n';
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
