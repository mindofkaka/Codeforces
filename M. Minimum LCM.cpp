#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, a = 1; 
		cin >> n;
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i == 0){
				a = n/i;
				break;
			}
		}
		cout << a << ' ' << n-a << '\n';
	}
}
