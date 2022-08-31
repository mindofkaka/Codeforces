#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string a, b, c, res;
	cin >> a >> b >> c;
	res = a+b;
	sort(res.begin(), res.end()); sort(c.begin(), c.end());
	if(res == c) cout << "YES\n";
	else cout << "NO\n";
}