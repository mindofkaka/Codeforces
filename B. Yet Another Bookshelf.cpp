#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+5], bef = 0, aft = 0, one = 0;
		bool isTrue = true;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == 1){
				isTrue = false;
				one++;
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i] == 1) break;
			else bef++;
		}
		for(int i = n-1; i >= 0; i--){
			if(a[i] == 1) break;
			else aft++;
		}
		if(one == 1) cout << "0\n";
		else cout << n-aft-bef-one << '\n';
	}
}
