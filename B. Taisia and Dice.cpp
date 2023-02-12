#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, s, r;
		cin >> n >> s >> r;
		int div = r/(n-1);
		int mod = r%(n-1);
		for(int i = 0; i < (n-mod-1); i++){
			cout << div << ' ';
		}
		for(int i = 0; i < mod; i++){
			cout << div+1 << ' ';
		}
		cout << s-r << '\n';
	}
}
