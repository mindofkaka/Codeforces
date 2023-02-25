#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> st;
		int a[n+5];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			st.insert(a[i]);
		}
		int sz = st.size();
		if((n-sz)%2 == 0){
			cout << sz << '\n';
		}else{
			cout << sz-1 << '\n';
		}
	}
}
