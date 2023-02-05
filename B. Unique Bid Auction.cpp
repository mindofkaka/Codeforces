#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a, ans = -1; 
		vector<int> freq(n+1), idx(n+1);
		for(int i = 0; i < n; i++){
			cin >> a;
			freq[a]++;
			idx[a] = i+1;
		}
		for(int i = 0; i <= n; i++){
			if(freq[i] == 1){
				ans = idx[i];
				break;
			}
		}
		cout << ans << "\n";
	}
}
