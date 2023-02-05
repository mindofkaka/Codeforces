#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		int count = 1e9;
		for(int i = 0; i < 1000; i++){
			int j = 0;
			if(b+i < 2) continue;
			int m = a;
			while(m > 0){
				m/=b+i;
				j++;
			}
			count = min(count, i+j);
		}
		cout << count << "\n";
	}
}
