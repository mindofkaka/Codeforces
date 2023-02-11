#include <bits/stdc++.h>
using namespace std;

int n, a[100005], cnt[105], c = 0;
int main() {
	memset(cnt, 0, sizeof(cnt));
	cin >> n;
	bool f = false, f2 = false;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]]++;
		if(cnt[a[i]] > 2) f = true;
	}
	for(int i = 0; i < 102; i++){
		if(cnt[a[i]] == 1) c++;
	}
	if(c%2 == 0){
		f = true;
		f2 = true;
	}
	if(f == false){
		cout << "NO";
		return 0;
	}
	cout << "YES\n";
	int k = 0;
	for(int i = 0; i < n; i++){
		if(cnt[a[i]] == 1){
			k++;
			if(k <= c/2) cout << 'A';
			else cout << 'B';
		}else if(cnt[a[i]] > 2 && !f2){
			cout << 'A';
			f2 = true;
		}else{
			cout << 'B';
		}
	}
}
