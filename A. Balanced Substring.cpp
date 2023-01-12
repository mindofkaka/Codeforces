#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int a = 0, b = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'a') a++;
			if(s[i] == 'b') b++;
		}
		if(a > 0 && b > 0){
			for(int i = 0; i < n; i++){
				if((s[i] == 'a' && s[i+1] == 'b') || (s[i] == 'b' && s[i+1] == 'a')){
					cout << i+1 << " " << i+2 << "\n";
					break;
 				}
			}
		}else{
			cout << "-1 -1\n";
		}
	}
}
