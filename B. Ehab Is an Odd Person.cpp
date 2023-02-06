#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n+1], od = 0, ev = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i]%2 == 0) ev++;
		else od++;
	}
	if(ev > 0 && od > 0) sort(a, a+n);
	for(int i = 0; i < n; i++) cout << a[i] << " ";
}
