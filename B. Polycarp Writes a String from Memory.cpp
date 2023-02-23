#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		set<char> cnt;
		string s; cin >> s;
		int ans = 0;
		for(int i = 0; i < s.length(); i++){
			cnt.insert(s[i]);
			if(cnt.size() > 3){
				ans++;
				cnt.clear();
				cnt.insert(s[i]);
			}
		}
		if(cnt.size() != 0) ans++;
		cout << ans << '\n';
	}
}
