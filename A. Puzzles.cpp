#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, ans = 2000;
	cin >> n >> m;
	int a[m+1];
	for(int i = 0; i < m; i++) cin >> a[i];
	sort(a, a+m);
	for(int i = 0; i <= m-n; i++){
		ans = min(ans, a[n+i-1]-a[i]);
	}
	cout << ans;
}
