#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		ll n, B, x, y, sum = 0, a = 0;
		cin >> n >> B >> x >> y;
		for(int i = 0; i < n; i++){
			if(a+x <= B){
				a+=x;
			}else{
				a-=y;
			}
			sum+=a;
		}
		cout << sum << "\n";
	}
}
