#include <bits/stdc++.h>
using namespace std;

int main() {
	int y, k, n;
	cin >> y >> k >> n;
	int x = k-(y%k);
	if(x+y > n){
		cout << -1;
		return 0;
	}
	cout << x << ' ';
	for(int i = x+k; i+y <= n; i+=k){
		cout << i << ' ';
	}
}
