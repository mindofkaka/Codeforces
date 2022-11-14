#include <bits/stdc++.h>
using namespace std;

int a[155][155];

void quadtree(int rA, int rB, int cKi, int cKa, string jalur, int pos) {
	if (pos == jalur.length()) {
		for (int i = rA; i <= rB; i++) {
			for (int j = cKi; j <= cKa; j++) {
				a[i][j] = 1;
			}
		}
		return;
	}
	if (jalur[pos] == '0') {
		quadtree(rA, (rA+rB)/2, cKi, (cKi+cKa)/2, jalur, pos+1);
	}
	if (jalur[pos] == '1') {
		quadtree(rA, (rA+rB)/2, 1+(cKi+cKa)/2, cKa, jalur, pos+1);
	}
	if (jalur[pos] == '2') {
		quadtree(1+(rA+rB)/2, rB, cKi, (cKi+cKa)/2, jalur, pos+1);
	}
	if (jalur[pos] == '3') {
		quadtree(1+(rA+rB)/2, rB, 1+(cKi+cKa)/2, cKa, jalur, pos+1);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	string ans[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> ans[i];
	}
	int r, c;
	scanf("%d%d", &r, &c);
	int tmp = 1;
	while (tmp < max(r, c)) tmp *= 2;
	for (int i = 1; i <= n; i++) {
		quadtree(1, tmp, 1, tmp, ans[i], 1);
	}
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}