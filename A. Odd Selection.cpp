#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, x;
		cin >> n >> x;
		int a, od(0), ev(0);
		for(int i = 0; i < n; i++){
			cin >> a;
			if(a%2==0) ev++;
			else od++;
		}
		if(x==0){
			cout << "Yes\n";
			return;
		}
		for(int i = 1; i <= od; i+=2){
			if(i > x) break;
			if((x-i) <= ev){
				cout << "Yes\n";
				return;
			}
		}
		cout << "No\n";
}

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		solve();
	}
}
