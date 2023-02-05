#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	int t[n+1];
	for(int i = 1; i <= n; i++){
		cin >> t[i];
	}
	int mx = max(a-1, n-a);
	int mi = min(a-1, n-a);
	int arr[mx+5];
	memset(arr, 0, sizeof(arr));
	for(int i = 1; i <= a-1; i++){
		if(t[i] == 1){
			int x = abs(a-i);
			arr[x]++;
		}
	}
	for(int i = a+1; i <= n; i++){
		if(t[i] == 1){
			int x = abs(a-i);
			arr[x]++;
		}
	}
	int ans = 0;
	for(int i = 1; i <= mx; i++){
		if(arr[i] == 2){
			ans+=2;
		}else if(arr[i] == 1 && mi < i){
			ans++;
		}
	}
	if(t[a] == 1) ans++;
	cout << ans;
}
