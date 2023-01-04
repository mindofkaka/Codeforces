#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[8];
	cin >> n;
	for(int i = 0; i < 7; i++) cin >> a[i];
	int i = 0, ans = 0;
	while(n > 0){
		n -= a[i];
		i++;
		if(i == 7) i = 0;
		ans++;
	}
	if(ans%7 == 0) cout << 7;
	else cout << ans%7;
}
