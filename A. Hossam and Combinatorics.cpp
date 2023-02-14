#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n+5], mini = 1, maxi = 1, ans = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		for(int i = 1; i < n; i++){
			if(a[i] == a[0]) mini++;
			else break;
		}
		for(int i = n-2; i >= 0; i--){
			if(a[i] == a[n-1]) maxi++;
			else break;
		}
		ans = mini*maxi*2;
		if(a[0] == a[n-1]) ans = n*(n-1);
		cout << ans << '\n';
	}
}
