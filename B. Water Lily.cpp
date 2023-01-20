#include <bits/stdc++.h>
using namespace std;

int main() {
	double h, l;
	cin >> h >> l;
	double s = (l*l+h*h)/(2*h) - h;
	cout << fixed << setprecision(13) << s;
}
