#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		if(abs(x-y) < 2){
			cout << x+y << "\n";
		}else{
			int mx = max(x, y);
			int mi = min(x, y);
			cout << mx*2-1 << "\n";
		}
	}
}
