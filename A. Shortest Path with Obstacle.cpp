#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int xa, ya, xb, yb, xf, yf, ans = 0;
		cin >> xa >> ya >> xb >> yb >> xf >> yf;
		ans = abs(xa-xb) + abs(ya-yb);
		if((xa == xb && xa == xf && yf > min(ya, yb) && yf < max(ya, yb)) || (ya == yb && ya == yf && xf > min(xa, xb) && xf < max(xa, xb))) ans += 2;
		cout << ans << "\n";
	}
}
