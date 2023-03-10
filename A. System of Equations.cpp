#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, cnt = 0;
	cin >> n >> m;
	for(int i = 0; i <= min(n, m); i++){
		for(int j = 0; j <= min(n, m); j++){
			int x = pow(i, 2);
			int y = pow(j, 2);
			if(x+j == n && y+i == m) cnt++;
		}
	}
	cout << cnt;
}
