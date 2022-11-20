#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, ans;
	cin >> n >> m;
	double a, mx = 0;
	for(int i = 1; i <= n; i++){
		cin >> a;
		if(ceil(a/m) >= mx){
			ans = i;
			mx = ceil(a/m);
		}
	}
	cout << ans;
}
