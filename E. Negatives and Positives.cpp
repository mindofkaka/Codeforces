#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n+5], sum = 0, neg = 0;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			if(a[i] < 0){
				neg++;
				a[i]*=-1;
			}
			sum+=a[i];
		}
		sort(a+1, a+(n+1));
		if(neg%2 == 1) sum -= 2*a[1];
		cout << sum << '\n';
	}
}
