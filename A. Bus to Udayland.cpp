#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s, x[n];
	int a = 0;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(s[0] == 'O' && s[1] == 'O' && a == 0){
			s[0] = '+';
			s[1] = '+';
			a++;
			x[i] = s;
		}else if(s[3] == 'O' && s[4] == 'O' && a == 0){
			s[3] = '+';
			s[4] = '+';
			a++;
			x[i] = s;
		}else{
			x[i] = s;
		}
	}
	
	if(a == 0) cout << "NO\n";
	else{
		cout << "YES\n";
		for(int i = 0; i < n; i++){
			cout << x[i] << "\n";
		}
	}
}
