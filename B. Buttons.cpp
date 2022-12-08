#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int x = 1, ans = 0;
	for(int i = n; i >= 1; i--){
		ans += x*i;
		ans -= x-1;
		x++;
	}
	cout << ans;
}
