#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	vector<int> v(n);
	int m = 0;
	for(int i = 0; i < n; i++){
		cin >> v[i];
		m = max(m, v[i]);
	}
	ll cnt[100005] = {0};
	for(int i = 0; i < n; i++) cnt[v[i]]++;
	ll dp[100005];
	dp[0] = 0;
	dp[1] = cnt[1];
	for(int i = 2; i <= m; i++){
		dp[i] = max(dp[i-1], i*cnt[i]+dp[i-2]);
	}
	cout << dp[m];
}
