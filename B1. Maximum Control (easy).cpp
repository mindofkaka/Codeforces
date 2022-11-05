#include <bits/stdc++.h>
using namespace std;

int a[1005];
int main() {
	int n; cin >> n;
	int m = n-1, ans(0);
	memset(a, 0, sizeof(a)/sizeof(a[0]));
	for(int i = 1; i <= m; i++){
		int u, v;
		cin >> u >> v;
		a[u]++;
		a[v]++;
	}
	for(int i = 1; i <= n; i++){
		if(a[i] == 1) ans++;
	}
	cout << ans;
}