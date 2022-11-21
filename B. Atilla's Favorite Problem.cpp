#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		int maxi = 0;
		for(int i = 0; i < n; i++){
			int a = s[i]-'a'+1;
			maxi = max(maxi, a);
		}
		cout << maxi << "\n";
	}
}
