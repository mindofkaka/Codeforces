#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int n, x;
		set<int> s;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(s.count(x)) s.insert(-x);
			else s.insert(x);
		}
		cout << s.size() << "\n";
	}
}
