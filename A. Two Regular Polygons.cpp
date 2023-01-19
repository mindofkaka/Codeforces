#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int mi = min(n, m);
		int mx = max(n, m);
		if(mx%mi == 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}
