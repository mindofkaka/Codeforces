#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string a, b; cin >> a >> b;
		bool identic = true;
		for(int i = 0; i < n; i++){
			if(a[i] == 'R' && b[i] != 'R'){
				identic = false;
				break;
			}else if(a[i] != 'R' && b[i] == 'R'){
				identic = false;
				break;
			}
		} 
		if(identic) cout << "YES\n";
		else cout << "NO\n";
	}
}