#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n; cin >> n;
	ll a[n+1], fi(0), se(0), po1[n+1], po2[n+1], cnt1(0), cnt2(0), last(0);
	for(ll i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] > 0){
			fi += a[i];
			po1[cnt1] = a[i];
			cnt1++;
		}
		else{
			se += a[i]*-1;
			po2[cnt2] = a[i]*-1;
			cnt2++;
		}
	}
	if(fi > se) cout << "first";
	else if(se > fi) cout << "second";
	else{
		ll tmp(0);
		for(ll i = 0; i < min(cnt1, cnt2); i++){
			tmp = abs(po2[i]*1);
			if(po1[i] > tmp && po1[i] != tmp){
				cout << "first";
				return 0;
			}else if(po1[i] < tmp && po1[i] != tmp){
				cout << "second";
				return 0;
			}
		}
		if(a[n-1] > 0) cout << "first";
		else cout << "second";
	}
}
