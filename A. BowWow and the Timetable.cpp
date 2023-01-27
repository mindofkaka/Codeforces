#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	double a = s.length();
	double res = a/2;
	int ones = 0;
	for(int i = 1; i < s.length(); i++){
		if(s[i] == '1'){
			ones++;
			break;
		}
	}
	if(ones == 1){
		cout << ceil(res);
	}else{
		cout << floor(res);
	}
}
