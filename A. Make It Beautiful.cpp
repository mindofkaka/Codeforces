#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n-1];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		if(a[0] == a[n-1]){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			cout << a[n-1] << " " << a[0] << " ";
			for(int i = 1; i < n-1; i++) cout << a[i] << " ";
			cout << "\n";
		}
	}
}
