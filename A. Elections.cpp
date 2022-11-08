#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int aa = max(b, c)-a+1, bb = max(a, c)-b+1, cc = max(a, b)-c+1;
	
	if(aa > 0) cout << aa << " ";
	else cout << "0 ";
	
	if(bb > 0) cout << bb << " ";
	else cout << "0 ";
	
	if(cc > 0) cout << cc;
	else cout << 0;
	
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}