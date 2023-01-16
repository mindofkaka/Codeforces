#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1], x = 1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 1; i < n; i++){
			if(a[0] != a[i]) break;
			else x++;
		}
		cout << n-x << "\n";
	}
}
