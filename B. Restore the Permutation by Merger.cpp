#include <bits/stdc++.h>
using namespace std;

int check[110], a[110];
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		n*=2;
		for(int i = 0; i < n; i++) cin >> a[i];
		fill(check, check+110, 0);
		vector<int> ans;
		for(int i = 0; i < n; i++){
			if(check[a[i]] == 0){
				check[a[i]] = 1;
				ans.push_back(a[i]);
			}
		}
		for(auto c : ans) cout << c << ' ';
		cout << '\n';
	}
}
