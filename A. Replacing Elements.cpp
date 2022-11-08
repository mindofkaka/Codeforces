#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n, d;
		cin >> n >> d;
		int a[n];
		bool loe = true;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > d) loe = false;
		}
		if(loe){
			cout << "YES\n";
		}else{
			sort(a, a+n);
			if(a[0]+a[1] <= d) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}