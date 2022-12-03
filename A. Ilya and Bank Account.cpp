#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = s.length();
	if(s[0] == '-'){
		if(s[n-1] > s[n-2]){
			int x = n-1;
			s.erase(s.begin()+x);
		}else{
			int y = n-2;
			s.erase(s.begin()+y);
		}
		if(s[1] == '0'){
			cout << 0;
			return 0;
		}
		for(int i = 0; i < s.length(); i++) cout << s[i];
	}else{
		cout << s;
	}
}
