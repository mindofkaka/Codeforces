#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		multiset<int> ms;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ms.insert(a[i]);
		}
		int ans = 0;
		for(int i = 0; i < n; i++){
			ans = max(ans, (int) ms.count(a[i]));
		}
		cout << ans << "\n";
	}
}
