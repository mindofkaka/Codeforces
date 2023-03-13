#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	ll dp[n+5];
	dp[1] = 1;
	for(int i = 2; i <= n; i++){
		dp[i] = dp[i-1]+4*(i-1);
	}
	cout << dp[n];
}
