#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

ll modPower(ll base, ll power, ll modulo){
	if(power < 0) return 0;
	if(power == 0) return 1;
	ll output = 1;
	while(power > 0){
		if(power%2 == 1) output = output*base%modulo;
		power /= 2;
		base = base*base%modulo;
	}
	return output;
}

int main() {
	ll n, m;
	cin >> n >> m;
	ll w = modPower(2, m, mod)-1;
	ll z = modPower(w, n, mod);
	cout << z;
}
