#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int s[n];
		for(int i = 0; i < n; i++){
			cin >> s[i];
		}
		vector<int> v(s, s+n);
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++){
			if(s[i] == v[n-1]){
				cout << s[i]-v[n-2] << " ";
			}else{
				cout << s[i]-v[n-1] << " ";
			}
		}
		cout << "\n";
	}
}
