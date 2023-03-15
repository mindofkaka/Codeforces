#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	if(n == 2){
		cout << a[0] << ' ' << a[1] << '\n';
		return;
	}
	int pos = 0, mx = 1e9+7;
	for(int i = 1; i < n; i++){
		if(mx > abs(a[i-1]-a[i])){
			pos = i;
			mx = abs(a[i-1]-a[i]);
		}
	}
	for(int i = pos; i < n; i++) cout << a[i] << ' ';
	for(int i = 0; i < pos; i++) cout << a[i] << ' ';
	cout << '\n';
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
