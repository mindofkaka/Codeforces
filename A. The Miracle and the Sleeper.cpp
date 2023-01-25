#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		if(r/2 < l){
			cout << r%l << "\n";
		}else{
			cout << r%(r/2+1) << "\n";
		}
	}
}
