#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, add = 0; 
		cin >> n;
		string s; cin >> s;
		if(s[0] == '1') add++;
		for(int i = 1; i < s.length(); i++){
			if(s[i] == '0'){
				cout << '+';
			}else if(add == 0){
				add++;
				cout << '+';
			}else if(add == 1){
				add--;
				cout << '-';
			}
		}
		cout << '\n';
	}
}
