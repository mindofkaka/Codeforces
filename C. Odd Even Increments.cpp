#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int a[n+5], ans = 0, od = 0, ev = 0;
	cin >> a[1] >> a[2];
	if(a[1]%2 == 1) od = 1;
	if(a[2]%2 == 1) ev = 1;
	for(int i = 3; i <= n; i++){
		cin >> a[i];
		if((i%2 == 1 && a[i]%2 == 1 && od == 0) || (i%2 == 1 && a[i]%2 == 0 && od == 1)) ans = 1;
		if((i%2 == 0 && a[i]%2 == 1 && ev == 0) || (i%2 == 0 && a[i]%2 == 0 && ev == 1)) ans = 1;
	}
	if(ans == 0) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
