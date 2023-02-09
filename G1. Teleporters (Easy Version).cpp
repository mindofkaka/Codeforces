#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, c, ans = 0;
		cin >> n >> c;
		int a[n+5], sum[n+5];
		memset(sum, 0, sizeof(sum));
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			sum[i] += a[i]+i;
		}
		sort(sum, sum+(n+1));
		int ind = 1;
		while(c-sum[ind] >= 0){
			if(ind > n) break;
			c-=sum[ind];
			ind++; ans++;
		}
		cout << ans << '\n';
	}
}
