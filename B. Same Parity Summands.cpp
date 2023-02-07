#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	if((n%2 == k%2) && (n >= k)){
		cout << "YES\n";
		for(int i = 0; i < k-1; i++) cout << 1 << " ";
		cout << n-(k-1) << "\n";
	}else if((n%2 == 0) && (n >= 2*k)){
		cout << "YES\n";
		for(int i = 0; i < k-1; i++) cout << 2 << " ";
		cout << n-(k-1)*2 << "\n";
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
