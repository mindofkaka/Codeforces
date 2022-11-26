#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	ll k256 = min(k2, min(k5, k6));
	if(k256 == k2){
		cout << 256*k256;
	}else{
		k2 -= k256;
		ll k32 = min(k2, k3);
		cout << (256*k256) + (32*k32);
	}
}
