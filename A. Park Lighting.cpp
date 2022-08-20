#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n, m;
		cin >> n >> m;
		
		int x = n*m;
		if(x%2 != 0){
			x++;
		}
		cout << x/2 << endl;
	}
}