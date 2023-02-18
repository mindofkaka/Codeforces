#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int s; cin >> s;
		int n = 1;
		while(n*n < s){
			n++;
		}
		cout << n << '\n';
	}
}
