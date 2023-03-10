#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		pair<int, int> pr[n+5];
		for(int i = 0; i < n; i++) cin >> pr[i].first;
		for(int i = 0; i < n; i++) cin >> pr[i].second;
		sort(pr, pr+n);
		for(int i = 0; i < n; i++){
			if(pr[i].first <= k){
				k+=pr[i].second;
			}else{
				break;
			}
		}
		cout << k << '\n';
	}
}
