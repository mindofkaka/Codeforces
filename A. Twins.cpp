#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n; cin >> n;
	int a[n], sum = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n);
	int x = 0, ans = 0;
	for(int i = n-1; i >= 0; i--){
		x += a[i];
		ans++;
		if(x > sum-x){
			cout << ans;
			return 0;
		}
	}
}
