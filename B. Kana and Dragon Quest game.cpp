#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x, n, m;
	cin >> x >> n >> m;
	while(x > 0 && n > 0 && x/2+10 < x){
		n--;
		x = x/2+10;
	}
	if(x <= m*10){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
