#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, L, a, sum(0), c(0);
	cin >> n >> L >> a;
	while(n--){
		int t, l;
		cin >> t >> l;
		sum += (t-c)/a;
		c = t+l;
	}
	sum += (L-c)/a;
	cout << sum;
}