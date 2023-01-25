#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n%4 == 0){
			for(int i = 0; i < 4; i++) cout << n/4 << " ";
			cout << "\n";
		}else if(n%4 == 1){
			cout << n-3 << ' ' << 1 << ' ' << 1 << ' ' << 1 << "\n";
		}else if(n%4 == 2){
			cout << n-3 << ' ' << 1 << ' ' << 1 << ' ' << 1 << "\n";
		}else{
			cout << n-3 << ' ' << 1 << ' ' << 1 << ' ' << 1 << "\n";
		}
	}
}
