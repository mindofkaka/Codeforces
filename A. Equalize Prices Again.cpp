#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int q; cin >> q;
	while(q--){
		int n; cin >> n;
		int a[n], sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		int ans = sum/n;
		if(sum%n != 0) ans++;
		cout << ans << "\n";
	}
}
