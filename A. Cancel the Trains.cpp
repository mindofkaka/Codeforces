#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, m, ans = 0;
		cin >> n >> m;
		int a[n+1], b[m+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++){
			cin >> b[i];
			for(int j = 0; j < n; j++){
				if(b[i] == a[j]){
					ans++;
					break;
				}
			}
		}
		cout << ans << "\n";
		
	}
}
