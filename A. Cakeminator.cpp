#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c; 
	cin >> r >> c;
	char a[r][c];
	int row[r], col[c];
	memset(row, 0, sizeof(row));
	memset(col, 0, sizeof(col));
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> a[i][j];
			if(a[i][j] == 'S'){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	int ans = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(row[i] == 0 || col[j] == 0){
				ans++;
			}
		}
	}
	cout << ans;
}
