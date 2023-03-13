#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x;
		set<int> st;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(st.count(x) == 1){
				x++;
			}
			st.insert(x);
		}
		cout << st.size() << '\n';
	}
}
