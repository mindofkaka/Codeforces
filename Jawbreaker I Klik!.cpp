#include <bits/stdc++.h>
using namespace std;

int a[27][27];
int h[] = {0, 1, 0, -1};
int v[] = {-1, 0, 1, 0};
int r, c;

int floodfill(int baris, int kolom, int nilai) {
	int cnt = 1;
	a[baris][kolom] = 6;
	for (int i = 0; i < 4; i++) {
		int nextB = baris + v[i];
		int nextK = kolom + h[i];
		if (nextB >= 0 && nextB < r){
			if (nextK >= 0 && nextK < c){
				if (a[nextB][nextK] == nilai) {
					cnt += floodfill(nextB, nextK, nilai);
				}
			}
		}
	}
	return cnt;
}

int main() {
	scanf("%d%d", &r, &c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int x, y;
	scanf("%d%d", &x, &y);
	int val = floodfill(x, y, a[x][y]);
	printf("%d", val * (val-1));
}