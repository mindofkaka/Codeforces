#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, x; 
	cin >> n;
	int cnt[10] = {};
	for(int i = 0; i < n; i++){
		cin >> x;
		cnt[x%10]++;
	}
	vector<int> v;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < min(cnt[i], 3); j++){
			v.push_back(i);
		}
	}
	int m = v.size();
	for (int i = 0; i < m; i++) {
		for (int j = i + 1; j < m; j++) {
			for (int k = j + 1; k < m; k++) {
				if ((v[i] + v[j] + v[k]) % 10 == 3) {
					cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
