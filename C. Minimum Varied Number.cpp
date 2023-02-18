#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int s; cin >> s;
		string res;
		for(int i = 9; i >= 1; i--){
			if(s >= i){
				res = char('0'+i)+res;
				s-=i;
			}
		}
		cout << res << '\n';
	}
}
