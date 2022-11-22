#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	int h, m, tmpm, tmph, maxi = -1, ans = 1;
	for(int i = 0; i < n; i++){
		cin >> h >> m;
		if(h == tmph && m == tmpm){
			ans++;
		}else{
			ans = 1;
		}
		tmph = h;
		tmpm = m;
		maxi = max(maxi, ans);
	}
	cout << maxi;
}
