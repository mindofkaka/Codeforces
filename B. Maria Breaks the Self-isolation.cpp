#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5], ans = 0;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+(n+1));
		for(int i = 1; i <= n; i++){
			if(a[i] <= i) ans = i;
		}
		cout << ans+1 << '\n';
	}
}
