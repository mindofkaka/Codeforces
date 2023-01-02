#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1], ans = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++){
			if(a[i]*a[i+1] > ans) ans = a[i]*a[i+1];
		}
		cout << ans << "\n";
	}
}
