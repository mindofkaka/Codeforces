#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	pair<int, int> xy[n+1];
	for(int i = 0; i < n; i++){
		cin >> xy[i].first >> xy[i].second;
	}
	sort(xy, xy+n);
	for(int i = 1; i < n; i++){
		if(xy[i-1].second > xy[i].second){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	string ans = "";
	int curx = 0, cury = 0, x, y;
	for(int i = 0; i < n; i++){
		x = xy[i].first;
		y = xy[i].second;
		for(int i = 0; i < x-curx; i++){
			ans+='R';
		}
		for(int i = 0; i < y-cury; i++){
			ans+='U';
		}
		curx = x;
		cury = y;
	}
	cout << ans << '\n';
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
}
