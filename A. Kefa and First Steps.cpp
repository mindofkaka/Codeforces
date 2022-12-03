#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a, mx = 1, last = 0, count = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a > 0){
			if(last <= a){
				count++;
			}else{
				count = 1;
			}
		}
		mx = max(mx, count);
		last = a;
	}
	cout << mx;
}
