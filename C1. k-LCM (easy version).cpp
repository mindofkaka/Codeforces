#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		if(n%4 == 0){
			cout << n/2 << " " << n/4 << " " << n/4;
		}else if(n%2 == 0){
			cout << n/2-1 << " " << n/2-1 << " " << 2;
		}else{
			cout << 1 << " " << n/2 << " " << n/2;
		}
		cout << "\n";
	}
}
