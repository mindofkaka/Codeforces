#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, m, k, ans = 0;
		cin >> n >> m >> k;
		int a1 = min(m, n/k);
		int a2 = (m-a1+k-2)/(k-1);
		cout << a1-a2 << '\n';
	}
}
