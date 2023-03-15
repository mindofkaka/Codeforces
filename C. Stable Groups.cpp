#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n, k, x;
	cin >> n >> k >> x;
	ll a[n+1], dif[n+1], ans = n;
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	for(int i = 0; i < n; i++){
		if(i > 0){
			dif[i-1] = a[i]-a[i-1];
		}
	}
	sort(dif, dif+(n-1));
	for(int i = 0; i < n-1; i++){
		ll b = dif[i]/x;
		if(dif[i]%x != 0) b++;
		b--;
		if(k-b >= 0 && dif[i] > x){
			k-=b;
			dif[i] = 0;
		}
		if(dif[i] <= x){
			ans--;
		}
	}
	cout << ans;
}
