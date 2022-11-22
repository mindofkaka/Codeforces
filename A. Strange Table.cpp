#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n, m, x;
		cin >> n >> m >> x;
		
		ll row = x%n;
		if(row == 0) row = n;
		ll col = x/n;
		if(x%n != 0) col++;
		cout << (row - 1)*m + col << "\n";
	}
}
