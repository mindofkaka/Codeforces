#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int i = 1, cnt = 1, ans = 0; 
		while(true){
			i*=2;
			cnt+=i;
			if(n%cnt == 0){
				ans = n/cnt;
				break;
			}
		}
		cout << ans << '\n';
	}
}
