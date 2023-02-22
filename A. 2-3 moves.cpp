#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n == 1){
			cout << "2\n";
		}else if(n == 2 || n == 3){
			cout << "1\n";
		}else{
			if(n%3 == 0){
				cout << n/3 << '\n';
			}else{
				cout << n/3+1 << '\n';
			}
		}
	}
}
