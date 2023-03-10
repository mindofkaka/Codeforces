#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a, ev = 0, od = 0;
		for(int i = 0; i < n; i++){
			cin >> a;
			if(a%2 == 0) ev++;
			else od++;
		}
		cout << min(od, n-od) << '\n';
	}
}
