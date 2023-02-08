#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
		int x, k = 1, pos = 0; 
		cin >> x;
		while(pos < x){
			pos+=k;
			k++;
		}
		if(pos == x+1){
			cout << k << "\n";
		}else{
			cout << k-1 << "\n"; 
		}
	}
}
