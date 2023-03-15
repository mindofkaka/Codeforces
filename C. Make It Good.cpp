#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int a[n+5];
	for(int i = 0; i < n; i++) cin >> a[i];
	int pos = n-1;
	while(a > 0 && a[pos-1] >= a[pos]) pos--;
	while(a > 0 && a[pos-1] <= a[pos]) pos--;
	if(pos < 0) pos = 0;
	cout << pos << '\n';
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
