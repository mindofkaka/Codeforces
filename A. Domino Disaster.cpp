#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		for(int i = 0; i < n; i++){
			if(s[i] == 'L' || s[i] == 'R'){
				cout << "LR";
				i++;
			}else if(s[i] == 'D') cout << 'U';
			else if(s[i] == 'U') cout << 'D';
		}
		cout << "\n";
	}
}
