#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int p1, c1, p, c;
		cin >> p1 >> c1;
		int mxp = p1, mxc = c1, lastP = p1, lastC = c1;
		bool isTrue = true;
		if(p1 < c1){
			isTrue = false;
		}
		for(int i = 1; i < n; i++){
			cin >> p >> c;
			mxp = max(mxp, p);
			mxc = max(mxc, c);
			if(p < mxp || c < mxc || p < c){
				isTrue = false;
			}else if(lastP == p && lastC < c){
				isTrue = false;
			}else if(p-lastP < c-lastC){
				isTrue = false;
			}
			lastP = p;
			lastC = c;
		}
		if(isTrue) cout << "YES\n";
		else cout << "NO\n";
	}
}
