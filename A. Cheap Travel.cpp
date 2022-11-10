#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int ans = n*a;
	
	ans = min(ans, (n/m)*b + (n%m)*a);
	ans = min(ans, (n/m + 1)*b);
	cout << ans;
}
