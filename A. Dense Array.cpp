#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1], hi = 0, ans = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++){
			double mx = max(a[i], a[i+1]);
			double mi = min(a[i], a[i+1]);
			double num = mx/mi;
			while(num > 2.0){
				num = ceil(num/2.0);
				ans++;
			}
		}
		cout << ans << "\n";
	}
}
