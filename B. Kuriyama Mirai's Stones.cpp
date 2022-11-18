#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n; cin >> n;
	ll v[n], x[n], u[n], y[n];
	for(ll i = 0; i < n; i++){
		cin >> v[i];
		u[i] = v[i];
	}
	sort(u, u+n);
	y[0] = u[0];
	x[0] = v[0];
	for(ll i = 1; i < n; i++){
		x[i] = v[i] + x[i-1];
		y[i] = u[i] + y[i-1];
	}
	ll m; cin >> m;
	while(m--){
		ll type, l, r;
		cin >> type >> l >> r;
		l--; r--;
		if(type == 1){
			cout << (x[r]-x[l]+v[l]) << "\n";
		}else{
			cout << (y[r]-y[l]+u[l]) << "\n";
		}
	}
}
