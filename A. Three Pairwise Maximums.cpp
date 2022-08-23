#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	
	while(t--){
		int x, y, z;
		cin >> x >> y >> z;
		
		if(x > y) swap(x, y);
		if(x > z) swap(x, z);
		if(y > z) swap(y, z);
		
		if(y == z){
			cout << "YES\n";
			cout << x << " " << x << " " << z << "\n";
		}else{
			cout << "NO\n";
		}
	}
}