#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	if(n%7 == 0){
		cout << n << '\n';
	}else{
		int ans = 0;
		for(int i = 0; i < 10; i++){
			if((n-n%10+i)%7 == 0){
				cout << n-n%10+i << '\n';
				return;
			}
		}
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
