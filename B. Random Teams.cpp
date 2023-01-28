#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n, m; 
	cin >> n >> m;
	ll mi, mx, a = n/m, b = n%m;
	ll y = n-(m-1);
	mx = y*(y-1)/2;
	mi = (a*(a-1)/2)*(m-b)+((a+1)*a/2)*b;
	cout << mi << " " << mx;
}
