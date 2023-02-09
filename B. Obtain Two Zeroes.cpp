#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b){
	int mx = max(a, b);
	int mi = min(a, b);
	int diff = abs(a-b);
	int p = 2*diff;
	if(mi == 0 && mx > 0) return false;
	if((mx-p)%3 == 0 && (mi-diff)%3 == 0 && (mx-p) >= 0 && (mi-diff) >= 0) return true;
	return false;
}

int main() {
	int t; cin >> t;
	while(t--){
		int a, b; 
		cin >> a >> b;
		if(check(a,b) == true){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}
