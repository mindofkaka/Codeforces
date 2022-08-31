#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		for(int i = 0; i < s.length()-2; i++){
			if(s[i] == s[i+1]) s.erase(s.begin()+i);
		}
		cout << s << "\n";
	}
}