#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, m, k;
		cin >> n >> m >> k;
		int x = n-1;
		int y = n*(m-1);
		if(x+y == k) cout << "YES\n";
		else cout << "NO\n";
	}
}
