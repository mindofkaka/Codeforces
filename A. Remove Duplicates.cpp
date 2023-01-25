#include <bits/stdc++.h>
using namespace std;
const int max_n = 1e5;

int a[max_n], arr[max_n], ans[max_n];
int main() {
	int n; cin >> n;
	int count = 0;
	memset(arr, 0, sizeof(arr));
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = n-1; i >= 0; i--){
		if(!arr[a[i]]){
			ans[count++]=a[i];
			arr[a[i]] = 1;
		}
	}
	cout << count << "\n";
	for(int i = count-1; i >= 0; i--){
		cout << ans[i] << " ";
	}
}
