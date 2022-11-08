#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	string s; cin >> s;
	int count(0), del(0);
	for(int i = 0; i < n; i++){
		if(s[i] == 'x'){
			count++;
		}else{
			count = 0;
		}
		if(count >= 3 && s[i] == 'x'){
			del++;
		}
	}
	cout << del;
}