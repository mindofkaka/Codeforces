#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5], b[n+5];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			cin >> b[i];
			if(b[i] < a[i]){
				swap(a[i], b[i]);
			}
		}
		sort(a, a+n);
		sort(b, b+n);
		cout << a[n-1]*b[n-1] << '\n';
	}
}
