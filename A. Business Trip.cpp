#include <bits/stdc++.h>
using namespace std;

int a[15];
int main() {
	int k, sum = 0, cnt = 0; 
	cin >> k;
	for(int i = 0; i < 12; i++) cin >> a[i];
	sort(a, a+12, greater<int>());
	for(int i = 0; i < 12; i++){
		if(sum >= k) break;
		sum+=a[i];
		cnt++;
	}
	if(sum < k){
		cout << -1;
		return 0;
	}
	cout << cnt;
}
