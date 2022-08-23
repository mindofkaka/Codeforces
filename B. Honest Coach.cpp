#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		int s[n];
		for(int i = 0; i < n; i++){
			cin >> s[i];
		}
		sort(s, s+n);
		int diff_v = 100000;
		for(int i = 0; i < n-1; i++){
			if(diff_v > s[i+1] - s[i]){
				diff_v = s[i+1] - s[i];
			}
		}
		cout << diff_v << "\n";
	}
}